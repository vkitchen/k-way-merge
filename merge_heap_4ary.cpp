#include "harness.h"

#include "merge_heap_4ary.h"

class heap {
	private:
		int **array;
		size_t size;

		void sift_down(size_t position) {
			int *key = array[position];
			int key_value = *key;

			while (true) {
				size_t first_child = position * 4 + 1;

				if (first_child >= size)
					break;

				size_t child = first_child;
				int child_value = *array[child];

				size_t last_child = first_child + 3;
				if (last_child >= size)
					last_child = size - 1;

				for (size_t i = first_child + 1; i <= last_child; i++) {
					int value = *array[i];

					if (value > child_value) {
						child = i;
						child_value = value;
					}
				}

				if (key_value >= child_value)
				break;

				array[position] = array[child];
				position = child;
			}

			array[position] = key;
		}

	public:
		heap(int **array, size_t size = 0) : array(array), size(size) {
			/* Nothing */
		}

		void heapify() {
			if (size < 2)
				return;

			for (size_t i = (size - 2) / 4 + 1; i-- > 0; )
				sift_down(i);
		}

		void promote() {
			int *key = array[0];
			int key_value = *key;
			size_t position = 0;

			while (true) {
				size_t first_child = position * 4 + 1;
				if (first_child >= size)
					break;

				size_t child = first_child;
				int child_value = *array[child];

				// Find maximum among up to 4 children
				for (size_t i = 1; i < 4 && first_child + i < size; i++) {
					size_t candidate = first_child + i;
					int value = *array[candidate];

					if (value > child_value) {
						child = candidate;
						child_value = value;
					}
				}

				if (key_value >= child_value)
					break;

				array[position] = array[child];
				position = child;
			}

			array[position] = key;
		}

};

bool MergeHeap4ary::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];
	
	heap priority(segments, n);

	priority.heapify();

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
