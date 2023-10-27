#include <stdlib.h>

#include "harness.h"

static int *segments[4];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

void merge_quick_sort(struct test *t) {
	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	for (;;) {
		t->results[pos++] = *segments[0];

		segments[0]++;
		if (*segments[0] == 0)
			break;
		qsort(segments, 4, sizeof(int *), cmp_p);
	}
}
