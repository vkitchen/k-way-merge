#include <utility>

#include "harness.h"

#include "merge_double_bubble_sort.h"

static void sort(int **a, int length) {
	for (size_t i = length; i > 1; i -= 2) {
		int *x = a[0];
		int *y = a[1];
		if (*y > *x) std::swap(x, y);
		for (size_t j = 2; j < i; j++) {
			int *z = a[j];
			bool is_smaller = *z > *y;
			int *w = is_smaller ? z : y;
			y = is_smaller ? y : z;
			is_smaller = *z > *x;
			a[j - 2] = is_smaller ? z : x;
			x = is_smaller ? x : w;
		}
		a[i - 2] = x;
		a[i - 1] = y;
	}
}

bool MergeDoubleBubbleSort::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort(segments, n);

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;

		sort(segments, n);
	}

	free(segments);

	return true;
}
