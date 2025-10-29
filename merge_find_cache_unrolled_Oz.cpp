#include "harness.h"

#include "merge_find_cache_unrolled.h"

#include "find_unrolled.cpp"

bool MergeFindCacheUnrolledOz::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}

	// process
	bool out = merge_k(t, n, segments, cache);

	free(cache);
	free(segments);

	return out;
}
