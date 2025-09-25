#include "harness.h"

#include "merge_find_cache_3.h"

static void merge_3(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		int best = 0;

		if (cache[1] > cache[best])
			best = 1;

		if (cache[2] > cache[best])
			best = 2;

		if (cache[best] == 0)
			break;

		t->results[pos++] = *segments[best]++;
		cache[best] = segments[best][0];
	}
}

static void merge_4(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		int best = 0;

		if (cache[1] > cache[best])
			best = 1;

		if (cache[2] > cache[best])
			best = 2;

		if (cache[3] > cache[best])
			best = 3;

		if (cache[best] == 0)
			break;

		t->results[pos++] = *segments[best]++;
		cache[best] = segments[best][0];
	}
}

static void merge_5(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		int best = 0;

		if (cache[1] > cache[best])
			best = 1;

		if (cache[2] > cache[best])
			best = 2;

		if (cache[3] > cache[best])
			best = 3;

		if (cache[4] > cache[best])
			best = 4;

		if (cache[best] == 0)
			break;

		t->results[pos++] = *segments[best]++;
		cache[best] = segments[best][0];
	}
}

static void merge_6(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		int best = 0;

		if (cache[1] > cache[best])
			best = 1;

		if (cache[2] > cache[best])
			best = 2;

		if (cache[3] > cache[best])
			best = 3;

		if (cache[4] > cache[best])
			best = 4;

		if (cache[5] > cache[best])
			best = 5;

		if (cache[best] == 0)
			break;

		t->results[pos++] = *segments[best]++;
		cache[best] = segments[best][0];
	}
}

bool MergeFindCache3::merge(struct test *t, int n) {
	if (n != 3 && n != 4 && n != 5 && n != 6)
		return false;

	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = t->postings[i][0];
	}

	// process
	if (n == 3)
		merge_3(t, segments, cache);
	if (n == 4)
		merge_4(t, segments, cache);
	if (n == 5)
		merge_5(t, segments, cache);
	if (n == 6)
		merge_6(t, segments, cache);

	free(cache);
	free(segments);

	return true;
}
