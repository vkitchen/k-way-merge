#include "harness.h"

#include "merge_heap_branchless.h"

namespace {
	class heap {
		private:
			int **array;
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

				if (left < size && *array[left] > *array[position])
					smallest = left;
				else
					smallest = position;

				if (right < size && *array[right] > *array[smallest])
					smallest = right;

				if (smallest != position) {
					std::swap(array[position], array[smallest]);
					heapify(smallest);
				}
			}

		public:
			heap(int **array, size_t size = 0) : array(array), size(size) {
				/* Nothing */
			}

			void make_heap(void) {
				for (int64_t position = size / 2 - 1; position >= 0; position--)
					heapify(position);
			}

			void promote() {
				int *key = array[0];
				size_t position = 0;

				while (true) {
					size_t left = left_of(position);
					if (left >= size)
						break;

					size_t right = left + 1;

					size_t child = left;
					if (right < size)
						child += (*array[right] > *array[left]);

					auto cmp = array[child];
					array[position] = (*key > *cmp ? key : cmp);
					key = (*key > *cmp ? cmp : key);

					position = child;
				}

				array[position] = key;
			}

	};
}

bool MergeHeapBranchless::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];
	
	heap priority(segments, n);

	priority.make_heap();

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;

		priority.promote();
	}

	free(segments);

	return true;
}
