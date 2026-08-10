#include "harness.h"

#include "merge_heap_4ary_branchless_parallel.h"

namespace {
	class heap {
		private:
			int **array;
			int *cache;
			size_t size;

			void sift_down(size_t position) {
				int *key = array[position];
				int key_value = cache[position];

				while (true) {
					size_t first_child = position * 4 + 1;

					if (first_child >= size)
						break;

					int child = first_child;
					int child_value = cache[first_child];

					size_t last_child = first_child + 3;
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

				for (size_t i = (size - 2) / 4 + 1; i-- > 0; )
					sift_down(i);
			}

			__attribute__((optimize("no-thread-jumps")))
			void promote() {
				int *key = array[0];
				int key_value = cache[0];
				size_t position = 0;

				while (true) {
					size_t child = position * 4 + 1;
					if (child >= size)
						break;

					int best_i = child;
					int best = cache[child];

					best_i = cache[child + 1] > best ? child + 1 : best_i;
					best = cache[child + 1] > best ? cache[child + 1] : best;

					best_i = cache[child + 2] > best ? child + 2 : best_i;
					best = cache[child + 2] > best ? cache[child + 2] : best;

					best_i = cache[child + 3] > best ? child + 3 : best_i;
					best = cache[child + 3] > best ? cache[child + 3] : best;

					int *best_ptr = array[best_i];

					cache[position] = (key_value > best ? key_value : best);
					array[position] = (key_value > best ? key : best_ptr);
					key = (key_value > best ? best_ptr : key);
					key_value = (key_value > best ? best : key_value);

					position = best_i;
				}

				array[position] = key;
				cache[position] = key_value;
			}

	};
}

bool MergeHeap4aryBranchlessParallelOz::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * (n + 3));

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}
	cache[n] = 0;
	cache[n+1] = 0;
	cache[n+2] = 0;
	
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
