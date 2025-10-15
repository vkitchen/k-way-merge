#include "harness.h"

#include "merge_find_cache.h"

bool MergeFindCache::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = t->postings[i][0];
	}

	// process
	size_t pos = 0;
	for (;;) {
		int best = 0;

		for (int i = 1; i < n; i++)
			if (cache[i] > cache[best])
				best = i;

		if (cache[best] == 0)
			break;

		t->results[pos++] = cache[best];
		cache[best] = *++segments[best];
	}

	free(cache);
	free(segments);

	return true;
}
