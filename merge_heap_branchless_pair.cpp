#include "harness.h"

#include "merge_heap_branchless_pair.h"

namespace {
	class heap {
		private:
			std::pair<int, int *> *array;
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

				if (left < size && array[left].first > array[position].first)
					smallest = left;
				else
					smallest = position;

				if (right < size && array[right].first > array[smallest].first)
					smallest = right;

				if (smallest != position) {
					std::swap(array[position], array[smallest]);
					heapify(smallest);
				}
			}

		public:
			heap(std::pair<int, int *> *array, size_t size = 0) : array(array), size(size) {
				/* Nothing */
			}

			void make_heap(void) {
				for (int64_t position = size / 2 - 1; position >= 0; position--)
					heapify(position);
			}

			void promote() {
				auto key = array[0];
				size_t position = 0;

				while (true) {
					size_t left = left_of(position);
					if (left >= size)
						break;

					size_t right = left + 1;

					size_t child = left + (array[right].first > array[left].first);

					auto cmp = array[child];
					array[position] = (key.first > cmp.first ? key : cmp);
					key = (key.first > cmp.first ? cmp : key);

					position = child;
				}

				array[position] = key;
			}

	};
}

bool MergeHeapBranchlessPair::merge(struct test *t, int n) {
	std::pair<int, int *> *segments = (std::pair<int, int *> *)malloc(sizeof(std::pair<int, int *>) * (n + 1));

	for (int i = 0; i < n; i++)
		segments[i] = std::pair<int, int *>(*t->postings[i], t->postings[i]);

	segments[n] = {0, nullptr};
	heap priority(segments, n);

	priority.make_heap();

	// process
	size_t pos = 0;
	for (;;) {
		if (segments[0].first == 0)
			break;

		t->results[pos++] = segments[0].first;
		segments[0].first = *++segments[0].second;

		priority.promote();
	}

	free(segments);

	return true;
}
