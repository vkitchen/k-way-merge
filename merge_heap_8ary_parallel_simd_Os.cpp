#include "harness.h"

#include <immintrin.h>

#include "merge_heap_8ary_parallel_simd.h"

static const __m256i lanes = _mm256_setr_epi32(0,1,2,3,4,5,6,7);
static const __m256i perm1 = _mm256_setr_epi32(4,5,6,7,0,1,2,3);
static const __m256i perm2 = _mm256_setr_epi32(2,3,0,1,6,7,4,5);
static const __m256i perm3 = _mm256_setr_epi32(1,0,3,2,5,4,7,6);

class heap {
	private:
		int **array;
		int *cache;
		size_t size;

		void sift_down(size_t position) {
			int *key = array[position];
			int key_value = cache[position];

			while (true) {
				size_t first_child = position * 8 + 1;

				if (first_child >= size)
					break;

				int child = first_child;
				int child_value = cache[first_child];

				size_t last_child = first_child + 7;
				if (last_child >= size)
					last_child = size - 1;

				for (size_t i = first_child + 1; i <= last_child; i++) {
					int value = cache[i];

					if (value > child_value) {
						child = i;
						child_value = value;
					}
				}

				if (key_value >= child_value)
					break;

				cache[position] = child_value;
				array[position] = array[child];
				position = child;
			}

			array[position] = key;
			cache[position] = key_value;
		}

	public:
		heap(int **array, int *cache, size_t size = 0) : array(array), cache(cache), size(size) {
			/* Nothing */
		}

		void heapify() {
			if (size < 2)
				return;

			for (size_t i = (size - 2) / 8 + 1; i-- > 0; )
				sift_down(i);
		}

		inline void promote() {
			int *key = array[0];
			int key_value = cache[0];
			size_t position = 0;

			while (true) {
				size_t child = position * 8 + 1;
				if (child >= size)
					break;

				// Load the 8 child values.
				__m256i values = _mm256_loadu_si256((const __m256i *)&cache[child]);

				// Early exit.
				__m256i keyvec = _mm256_set1_epi32(key_value);
				__m256i gt = _mm256_cmpgt_epi32(values, keyvec);

				unsigned gtmask = _mm256_movemask_ps(_mm256_castsi256_ps(gt));

				if (gtmask == 0)
					break;

				// Horizontal maximum.
				__m256i indices = _mm256_add_epi32(lanes, _mm256_set1_epi32((int)child));

				auto reduce = [&](__m256i perm) {
					__m256i pv = _mm256_permutevar8x32_epi32(values, perm);
					__m256i pi = _mm256_permutevar8x32_epi32(indices, perm);

					__m256i mask = _mm256_cmpgt_epi32(pv, values);

					values = _mm256_max_epi32(values, pv);

					indices = _mm256_blendv_epi8(indices, pi, mask);
				};

				reduce(perm1);
				reduce(perm2);
				reduce(perm3);

				int best = _mm256_extract_epi32(values, 0);

				size_t best_i = (size_t)_mm256_extract_epi32(indices, 0);

				cache[position] = best;
				array[position] = array[best_i];
				position = best_i;
			}

			cache[position] = key_value;
			array[position] = key;
		}

};

bool MergeHeap8aryParallelSimdOs::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * (n + 7));

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}
	cache[n] = 0;
	cache[n+1] = 0;
	cache[n+2] = 0;
	cache[n+3] = 0;
	cache[n+4] = 0;
	cache[n+5] = 0;
	cache[n+6] = 0;
	
	heap priority(segments, cache, n);

	priority.heapify();

	// process
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0)
			break;

		t->results[pos++] = cache[0];
		cache[0] = *++segments[0];

		priority.promote();
	}

	free(segments);

	return true;
}
