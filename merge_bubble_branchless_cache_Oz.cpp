// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_bubble_branchless_cache.h"

static void sort_full(int **a, int length) {
	for (int i = length; i > 1; i--) {
		int *min = a[0];
		for (int j = 1; j < i; j++) {
			int *y = a[j];
			a[j - 1] = (*min >= *y ? min : y);
			min = (*min >= *y ? y : min);
		}
		a[i - 1] = min;
	}
}

static void sort_partial(int **a, int *cache, int length) {
	int min = cache[0];
	int *x = a[0];
	for (int j = 1; j < length; j++) {
		int cmp = cache[j];
		int *y = a[j];
		cache[j - 1] = (min >= cmp ? min : cmp);
		a[j - 1] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);
	}
	cache[length - 1] = min;
	a[length - 1] = x;
}

bool MergeBubbleBranchlessCacheOz::merge(struct test *t, int n) {
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
		if (cache[0] == 0)
			break;

		t->results[pos++] = cache[0];
		cache[0] = *++segments[0];

		sort_partial(segments, cache, n);
	}

	free(segments);

	return true;
}
