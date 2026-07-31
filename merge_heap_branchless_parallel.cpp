#include "harness.h"

#include "merge_heap_branchless_parallel.h"

namespace {
	class heap {
		private:
			int **array;
			int *cache;
			size_t size;

			size_t left_of(size_t position) {
				return (position << 1) + 1;
			}

			size_t right_of(size_t position) {
				return (position << 1) + 2;
			}

			void heapify(size_t position) {
				size_t smallest;

				size_t left = left_of(position);
				size_t right = right_of(position);

				if (left < size && cache[left] > cache[position])
					smallest = left;
				else
					smallest = position;

				if (right < size && cache[right] > cache[smallest])
					smallest = right;

				if (smallest != position) {
					std::swap(cache[position], cache[smallest]);
					std::swap(array[position], array[smallest]);
					heapify(smallest);
				}
			}

		public:
			heap(int **array, int *cache, size_t size = 0) : array(array), cache(cache), size(size) {
				/* Nothing */
			}

			void make_heap(void) {
				for (int64_t position = size / 2 - 1; position >= 0; position--)
					heapify(position);
			}

			void promote() {
				int *key = array[0];
				int key_value = cache[0];

				size_t position = 0;

				while (true) {
					size_t left = left_of(position);
					if (left >= size)
						break;

					size_t right = left + 1;

					size_t child = left + (cache[right] > cache[left]);

					auto cmp = array[child];
					auto cmp_value = cache[child];

					cache[position] = (key_value > cmp_value ? key_value : cmp_value);
					array[position] = (key_value > cmp_value ? key : cmp);
					key = (key_value > cmp_value ? cmp : key);
					key_value = (key_value > cmp_value ? cmp_value : key_value);

					position = child;
				}

				cache[position] = key_value;
				array[position] = key;
			}

	};
}

bool MergeHeapBranchlessParallel::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * (n + 1));

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}
	cache[n] = 0;
	
	heap priority(segments, cache, n);

	priority.make_heap();

	// process
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0)
			break;

		t->results[pos++] = cache[0]++;
		segments[0]++;
		cache[0] = *segments[0];

		priority.promote();
	}

	free(segments);

	return true;
}
