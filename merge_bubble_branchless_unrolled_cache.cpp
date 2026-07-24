// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_bubble_branchless_unrolled_cache.h"

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

static inline void sort_partial(int **a, int *cache, int length) {
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

// N.B. we don't explicitly unroll but allow the compiler to
bool MergeBubbleBranchlessUnrolledCache::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	for (int i = 0; i < n; i++)
		cache[i] = segments[i][0];

	if (n == 3) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 3);
		}
	} else if (n == 4) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 4);
		}
	} else if (n == 5) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 5);
		}
	} else if (n == 6) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 6);
		}
	} else if (n == 7) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 7);
		}
	} else if (n == 8) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 8);
		}
	} else if (n == 9) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 9);
		}
	} else if (n == 10) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 10);
		}
	} else if (n == 11) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 11);
		}
	} else if (n == 12) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 12);
		}
	} else if (n == 13) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 13);
		}
	} else if (n == 14) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 14);
		}
	} else if (n == 15) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 15);
		}
	} else if (n == 16) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 16);
		}
	} else if (n == 17) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 17);
		}
	} else if (n == 18) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 18);
		}
	} else if (n == 19) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 19);
		}
	} else if (n == 20) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 20);
		}
	} else if (n == 21) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 21);
		}
	} else if (n == 22) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 22);
		}
	} else if (n == 23) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 23);
		}
	} else if (n == 24) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 24);
		}
	} else if (n == 25) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 25);
		}
	} else if (n == 26) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 26);
		}
	} else if (n == 27) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 27);
		}
	} else if (n == 28) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 28);
		}
	} else if (n == 29) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 29);
		}
	} else if (n == 30) {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, 30);
		}
	} else {
		// process
		size_t pos = 0;
		for (;;) {
			if (cache[0] == 0)
				break;

			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];

			sort_partial(segments, cache, n);
		}
	}

	free(segments);

	return true;
}
