#include "harness.h"

#include "merge_insert_cache.h"

static void sort_full(int **a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		int *x = a[i];
		for (j = i - 1; j >= 0 && *a[j] < *x; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

static void sort_partial(int **a, int *cache, int length) {
	int i;
	int x = cache[0];
	int *y = a[0];
	for (i = 0; i < length-1 && cache[i+1] > x; i++) {
		cache[i] = cache[i+1];
		a[i] = a[i+1];
	}
	cache[i] = x;
	a[i] = y;
}

bool MergeInsertCacheO1::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	for (int i = 0; i < n; i++)
		cache[i] = segments[i][0];

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;
		cache[0] = segments[0][0];

		sort_partial(segments, cache, n);
	}

	free(cache);
	free(segments);

	return true;
}
