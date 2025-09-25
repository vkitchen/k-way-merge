#include "harness.h"

#include "merge_find_cache_unrolled.h"

static void merge_3(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		}
	}
}

static void merge_4(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		}
	}
}

static void merge_5(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		}
	}
}

static void merge_6(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		}
	}
}

bool MergeFindCacheUnrolled::merge(struct test *t, int n) {
	if (n != 3 && n != 4 && n != 5 && n != 6)
		return false;

	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
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
