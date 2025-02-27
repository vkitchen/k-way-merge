#include <stdlib.h>
#include <string.h>

#include <algorithm>

#include "harness.h"

#include "merge_pseudo_avx_sort_binary_search.h"

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
	unsigned char x = segments[0];
	unsigned char *pos = std::lower_bound(&segments[1], &segments[length], x, [postings](unsigned char a, unsigned char x) { return *postings[a] > *postings[x]; });
	int i = pos - segments - 1;

	memmove(&segments[0], &segments[1], i);
	segments[i] = x;
}

bool MergePseudoAvxSortBinarySearch::merge(struct test *t, int n) {
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
