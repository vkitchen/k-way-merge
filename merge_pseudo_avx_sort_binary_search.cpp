#include <string.h>

#include <algorithm>

#include "harness.h"

static int *postings[16];
static unsigned char segments[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

static void sort_full(int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		unsigned char x = segments[i];
		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
			segments[j+1] = segments[j];
		segments[j+1] = x;
	}
}

static void sort_partial(int length) {
	unsigned char x = segments[0];
	unsigned char *pos = std::lower_bound(&segments[1], &segments[length], segments[0], [](unsigned char a, unsigned char b) { return *postings[a] > *postings[b]; });
	int i = pos - segments - 1;

	memmove(&segments[0], &segments[1], i);
	segments[i] = x;
}

bool merge_pseudo_avx_sort_binary_search(struct test *t, int n) {
	for (int i = 0; i < n; i++)
		postings[i] = t->postings[i];

	sort_full(n);

	// process
	size_t pos = 0;
	for (;;) {
		if (*postings[segments[0]] == 0)
			break;

		t->results[pos++] = *postings[segments[0]]++;

		sort_partial(n);
	}

	return true;
}
