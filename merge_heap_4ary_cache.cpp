#include "harness.h"

#include <utility>

#include "merge_heap_4ary_cache.h"

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

				int best_i = child;
				auto best = array[child];

				best_i = array[child + 1].first > best.first ? child + 1 : best_i;
				best = array[child + 1].first > best.first ? array[child + 1] : best;

				best_i = array[child + 2].first > best.first ? child + 2 : best_i;
				best = array[child + 2].first > best.first ? array[child + 2] : best;

				best_i = array[child + 3].first > best.first ? child + 3 : best_i;
				best = array[child + 3].first > best.first ? array[child + 3] : best;

				if (key.first >= best.first)
					break;

				array[position] = best;
				position = best_i;
			}

			array[position] = key;
		}

};

bool MergeHeap4aryCache::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	std::pair<int, int> *tree = (std::pair<int, int>*)malloc(sizeof(std::pair<int, int>) * (n + 3));

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		tree[i] = { *t->postings[i], i };
	}
	tree[n] = { 0, 0 };
	tree[n+1] = { 0, 0 };
	tree[n+2] = { 0, 0 };
	
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
