#include "config.h"
#include "harness.h"

static int *segments[4];

static void sort(int **a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		int *x = a[i];
		for (j = i - 1; j >= 0 && *a[j] < *x; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

void merge_insertion_sort(struct test *t) {
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
