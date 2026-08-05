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

bool MergeBubbleBranchlessCacheManuallyUnrolled::merge(struct test *t, int n) {
	if (n > 6) return false;

	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	int cache0 = *segments[0];
	int cache1 = *segments[1];
	int cache2 = *segments[2];
	int cache3;
	int cache4;
	int cache5;
	if (n > 3)
		cache3 = *segments[3];
	if (n > 4)
		cache4 = *segments[4];
	if (n > 5)
		cache5 = *segments[5];

	// process
	size_t pos = 0;
	if (n == 3) {
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

			cache2 = min;
			segments[2] = x;
		}
	} else if (n == 4) {
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

			cache3 = min;
			segments[3] = x;
		}
	} else if (n == 5) {
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
	} else if (n == 6) {
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

	free(segments);

	return true;
}
