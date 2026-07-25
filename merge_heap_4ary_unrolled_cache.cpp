#include "harness.h"

#include <utility>

#include "merge_heap_4ary_unrolled_cache.h"

class heap {
	private:
		std::pair<int, int>*array;
		size_t size;

		void sift_down(size_t position) {
			auto key = array[position];

			while (true) {
				size_t first_child = position * 4 + 1;

				if (first_child >= size)
					break;

				int child_pos = first_child;
				auto child = array[first_child];

				size_t last_child = first_child + 3;
				if (last_child >= size)
					last_child = size - 1;

				for (size_t i = first_child + 1; i <= last_child; i++) {
					auto value = array[i];

					if (value.first > child.first) {
						child_pos = i;
						child = value;
					}
				}

				if (key.first >= child.first)
					break;

				array[position] = child;
				position = child_pos;
			}

			array[position] = key;
		}

	public:
		heap(std::pair<int, int>*array, size_t size = 0) : array(array), size(size) {
			/* Nothing */
		}

		void heapify() {
			if (size < 2)
				return;

			for (size_t i = (size - 2) / 4 + 1; i-- > 0; )
				sift_down(i);
		}

		void promote() {
			auto key = array[0];
			size_t position = 0;

			while (true) {
				size_t child = position * 4 + 1;
				if (child >= size)
					break;

				int best = child;

				if (child + 1 < size && array[child + 1].first > array[best].first)
					best = child + 1;

				if (child + 2 < size && array[child + 2].first > array[best].first)
					best = child + 2;

				if (child + 3 < size && array[child + 3].first > array[best].first)
					best = child + 3;

				if (key.first >= array[best].first)
					break;

				array[position] = array[best];
				position = best;
			}

			array[position] = key;
		}

};

bool MergeHeap4aryUnrolledCache::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	std::pair<int, int> *tree = (std::pair<int, int>*)malloc(sizeof(std::pair<int, int>) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		tree[i] = { *t->postings[i], i };
	}
	
	heap priority(tree, n);

	priority.heapify();

	// process
	size_t pos = 0;
	for (;;) {
		if (tree[0].first == 0)
			break;

		t->results[pos++] = tree[0].first;
		int pos = tree[0].second;
		segments[pos]++;
		tree[0].first = *segments[pos];

		priority.promote();
	}

	free(segments);

	return true;
}
