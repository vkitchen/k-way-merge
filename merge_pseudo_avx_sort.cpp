#include <stdlib.h>
#include <string.h>

#include "harness.h"

static void sort_full(int **postings, unsigned char *segments, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		unsigned char x = segments[i];
		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
			segments[j+1] = segments[j];
		segments[j+1] = x;
	}
}

static void sort_partial(int **postings, unsigned char *segments, int length) {
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)
		;

	memmove(&segments[0], &segments[1], i);
	segments[i] = x;
}

bool merge_pseudo_avx_sort(struct test *t, int n) {
	int **postings = (int **)malloc(sizeof(int *) * n);
	unsigned char *segments = (unsigned char *)malloc(n);

	for (int i = 0; i < n; i++) {
		postings[i] = t->postings[i];
		segments[i] = i;
	}

	sort_full(postings, segments, n);

	// process
	size_t pos = 0;
	for (;;) {
		if (*postings[segments[0]] == 0)
			break;

		t->results[pos++] = *postings[segments[0]]++;

		sort_partial(postings, segments, n);
	}

	free(segments);
	free(postings);

	return true;
}
