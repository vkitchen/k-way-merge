// Monobound Binary Search from https://github.com/scandum/binary_search
#include <cstring>

#include "harness.h"

#include "merge_insert_binary.h"

static void sort_full(int **a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		int *x = a[i];
		for (j = i - 1; j >= 0 && *a[j] < *x; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

static inline void sort_partial(int **a, int length) {
	if (*a[0] >= *a[1]) return;

	int *x = a[0];

	int bot = 0, mid, top = length;

	while (top > 1) {
                mid = top / 2;

                if (*x < *a[bot + mid])
                        bot += mid;
                top -= mid;
        }

	memmove(a, a + 1, bot * sizeof(int *));

	a[bot] = x;
}

bool MergeInsertBinary::merge(struct test *t, int n) {
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
