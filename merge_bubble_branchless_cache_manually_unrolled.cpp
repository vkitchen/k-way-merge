// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_bubble_branchless_cache_manually_unrolled.h"

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

static void merge_3(struct test *t, int **segments) {
	size_t pos = 0;
	int *segments0 = segments[0];
	int *segments1 = segments[1];
	int *segments2 = segments[2];
	int cache0 = *segments0;
	int cache1 = *segments1;
	int cache2 = *segments2;

	for (;;) {
		if (cache0 == 0)
			break;

		t->results[pos++] = cache0;
		cache0 = *++segments0;

		int min = cache0;
		int *x = segments0;

		int cmp = cache1;
		int *y = segments1;
		cache0 = (min >= cmp ? min : cmp);
		segments0 = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache2;
		y = segments2;
		cache1 = (min >= cmp ? min : cmp);
		segments1 = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cache2 = min;
		segments2 = x;
	}
}

static void merge_4(struct test *t, int **segments) {
	size_t pos = 0;
	int *segments0 = segments[0];
	int *segments1 = segments[1];
	int *segments2 = segments[2];
	int *segments3 = segments[3];
	int cache0 = *segments0;
	int cache1 = *segments1;
	int cache2 = *segments2;
	int cache3 = *segments3;

	for (;;) {
		if (cache0 == 0)
			break;

		t->results[pos++] = cache0;
		cache0 = *++segments0;

		int min = cache0;
		int *x = segments0;

		int cmp = cache1;
		int *y = segments1;
		cache0 = (min >= cmp ? min : cmp);
		segments0 = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache2;
		y = segments2;
		cache1 = (min >= cmp ? min : cmp);
		segments1 = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache3;
		y = segments3;
		cache2 = (min >= cmp ? min : cmp);
		segments2 = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cache3 = min;
		segments3 = x;
	}
}

static void merge_5(struct test *t, int **segments) {
	size_t pos = 0;
	int cache0 = *segments[0];
	int cache1 = *segments[1];
	int cache2 = *segments[2];
	int cache3 = *segments[3];
	int cache4 = *segments[4];

	for (;;) {
		if (cache0 == 0)
			break;

		t->results[pos++] = cache0;
		cache0 = *++segments[0];

		int min = cache0;
		int *x = segments[0];

		int cmp = cache1;
		int *y = segments[1];
		cache0 = (min >= cmp ? min : cmp);
		segments[0] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache2;
		y = segments[2];
		cache1 = (min >= cmp ? min : cmp);
		segments[1] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache3;
		y = segments[3];
		cache2 = (min >= cmp ? min : cmp);
		segments[2] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache4;
		y = segments[4];
		cache3 = (min >= cmp ? min : cmp);
		segments[3] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cache4 = min;
		segments[4] = x;
	}
}

static void merge_6(struct test *t, int **segments) {
	size_t pos = 0;
	int cache0 = *segments[0];
	int cache1 = *segments[1];
	int cache2 = *segments[2];
	int cache3 = *segments[3];
	int cache4 = *segments[4];
	int cache5 = *segments[5];

	for (;;) {
		if (cache0 == 0)
			break;

		t->results[pos++] = cache0;
		cache0 = *++segments[0];

		int min = cache0;
		int *x = segments[0];

		int cmp = cache1;
		int *y = segments[1];
		cache0 = (min >= cmp ? min : cmp);
		segments[0] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache2;
		y = segments[2];
		cache1 = (min >= cmp ? min : cmp);
		segments[1] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache3;
		y = segments[3];
		cache2 = (min >= cmp ? min : cmp);
		segments[2] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache4;
		y = segments[4];
		cache3 = (min >= cmp ? min : cmp);
		segments[3] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cmp = cache5;
		y = segments[5];
		cache4 = (min >= cmp ? min : cmp);
		segments[4] = (min >= cmp ? x : y);
		min = (min >= cmp ? cmp : min);
		x = (min >= cmp ? y : x);

		cache5 = min;
		segments[5] = x;
	}
}

bool MergeBubbleBranchlessCacheManuallyUnrolled::merge(struct test *t, int n) {
	if (n > 6) return false;

	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	// process
	if (n == 3) merge_3(t, segments);
	if (n == 4) merge_4(t, segments);
	if (n == 5) merge_5(t, segments);
	if (n == 6) merge_6(t, segments);

	free(segments);

	return true;
}
