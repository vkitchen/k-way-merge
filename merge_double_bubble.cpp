// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_double_bubble.h"

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
	int *x = a[0];
	int *y = a[1];
	if (*y > *x) std::swap(x, y);
	for (int j = 2; j < length; j++) {
		int *z = a[j];
		bool is_smaller = *z > *y;
		int *w = is_smaller ? z : y;
		y = is_smaller ? y : z;
		is_smaller = *z > *x;
		a[j - 2] = is_smaller ? z : x;
		x = is_smaller ? x : w;
	}
	a[length - 2] = x;
	a[length - 1] = y;
}

bool MergeDoubleBubble::merge(struct test *t, int n) {
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

		if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;

		sort_partial(segments, n);
	}

	free(segments);

	return true;
}
