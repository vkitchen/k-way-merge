#include "harness.h"

static int *postings[16];
static unsigned char segments[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

static void sort_full() {
	int i, j;
	for (i = 1; i < 16; i++) {
		unsigned char x = segments[i];
		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
			segments[j+1] = segments[j];
		segments[j+1] = x;
	}
}

static void sort_partial() {
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 15 && *postings[segments[i+1]] > *postings[x]; i++)
		segments[i] = segments[i+1];
	segments[i] = x;
}

void merge_avx_sort(struct test *t, int n) {
	if (n != 16)
		return;

	for (int i = 0; i < 16; i++)
		postings[i] = t->postings[i];

	sort_full();

	// process
	size_t pos = 0;
	for (;;) {
		if (*postings[segments[0]] == 0)
			break;

		t->results[pos++] = *postings[segments[0]]++;

		sort_partial();
	}
}
