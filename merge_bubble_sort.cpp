#include "harness.h"

static int *segments[4];

static void sort(int **a, int length) {
	for (int i = length; i > 1; i--) {
		int *max = a[0];
		for (int j = 1; j < i; j++) {
			int *y = a[j];
			a[j - 1] = (*max <= *y ? max : y);
			max = (*max <= *y ? y : max);
		}
		a[i - 1] = max;
	}
}

void merge_bubble_sort(struct test *t) {
	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	sort(segments, 4);

	// process
	size_t pos = 0;
	for (;;) {
		t->results[pos++] = *segments[0];

		segments[0]++;
		if (*segments[0] == 0)
			break;
		sort(segments, 4);
	}
}
