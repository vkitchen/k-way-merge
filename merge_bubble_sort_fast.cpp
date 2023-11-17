#include "harness.h"

static void sort_full(int **a, int length) {
	for (int i = length; i > 1; i--) {
		int *min = a[0];
		for (int j = 1; j < i; j++) {
			int *y = a[j];
			a[j - 1] = (*min >= *y ? min : y);
			min = (*min >= *y ? y : min);
		}
		a[i - 1] = min;
	}
}

static void sort_partial(int **a, int length) {
	int *min = a[0];
	for (int j = 1; j < length; j++) {
		int *y = a[j];
		a[j - 1] = (*min >= *y ? min : y);
		min = (*min >= *y ? y : min);
	}
	a[length - 1] = min;
}

bool merge_bubble_sort_fast(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;

		sort_partial(segments, n);
	}

	free(segments);

	return true;
}
