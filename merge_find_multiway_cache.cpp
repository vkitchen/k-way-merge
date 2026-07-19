#include "harness.h"

#include "merge_find_multiway_cache.h"

#include "find_multiway_cache.cpp"

bool MergeFindMultiwayCache::merge(struct test *t, int n) {
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
