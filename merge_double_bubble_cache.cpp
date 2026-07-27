// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_double_bubble_cache.h"

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
	int xv = cache[0];
	int *x = a[0];
	int yv = cache[1];
	int *y = a[1];

	if (yv > xv) std::swap(x, y);
	if (yv > xv) std::swap(xv, yv);

	for (int j = 2; j < length; j++) {
		int zv = cache[j];
		int *z = a[j];

		bool is_greater = zv > yv;

		int wv = is_greater ? zv : yv;
		int *w = is_greater ? z : y;

		yv = is_greater ? yv : zv;
		y = is_greater ? y : z;

		is_greater = zv > xv;

		cache[j - 2] = is_greater ? zv : xv;
		a[j - 2] = is_greater ? z : x;

		xv = is_greater ? xv : wv;
		x = is_greater ? x : w;
	}

	cache[length - 2] = xv;
	a[length - 2] = x;
	cache[length - 1] = yv;
	a[length - 1] = y;
}

bool MergeDoubleBubbleCache::merge(struct test *t, int n) {
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
		segments[0]++;
		cache[0] = *segments[0];

		if (cache[0] < cache[1]) std::swap(segments[0], segments[1]);
		if (cache[0] < cache[1]) std::swap(cache[0], cache[1]);

		if (cache[0] == 0)
			break;

		t->results[pos++] = cache[0];
		segments[0]++;
		cache[0] = *segments[0];

		sort_partial(segments, cache, n);
	}

	free(segments);

	return true;
}
