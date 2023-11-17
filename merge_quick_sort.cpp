#include <stdlib.h>

#include "harness.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool merge_quick_sort(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	qsort(segments, n, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;

		qsort(segments, n, sizeof(int *), cmp_p);
	}

	free(segments);

	return true;
}
