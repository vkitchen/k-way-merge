#include "harness.h"

#include "merge_find_branchless_cache.h"

bool MergeFindBranchlessCacheOz::merge(struct test *t, int n) {
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
		int best_i = 0;

		for (int i = 0; i < n; i++) {
			int cmp = cache[i];
			best = (best > cmp ? best : cmp);
			best_i = (best > cmp ? best_i : i);
		}

		if (best == 0)
			break;

		t->results[pos++] = best;
		cache[best_i] = *++segments[best_i];
	}

	free(cache);
	free(segments);

	return true;
}
