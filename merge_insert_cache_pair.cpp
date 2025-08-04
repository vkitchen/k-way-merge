#include "harness.h"

#include "merge_insert_cache_pair.h"

static void sort_full(std::pair<int, int *>*a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		std::pair<int, int *>x = a[i];
		for (j = i - 1; j >= 0 && a[j].first < x.first; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

static void sort_partial(std::pair<int, int *>*a, int length) {
	int i;
	std::pair<int, int *>x = a[0];
	for (i = 0; i < length-1 && a[i+1].first > x.first; i++) {
		a[i] = a[i+1];
	}
	a[i] = x;
}

bool MergeInsertCachePair::merge(struct test *t, int n) {
	std::pair<int, int *>*segments = (std::pair<int, int *>*)malloc(sizeof(std::pair<int, int *>) * n);

	for (int i = 0; i < n; i++)
		segments[i] = std::pair<int, int *>(*t->postings[i], t->postings[i]);

	sort_full(segments, n);

	// process
	size_t pos = 0;
	for (;;) {
		if (segments[0].first == 0)
			break;

		t->results[pos++] = *segments[0].second++;
		segments[0].first = *segments[0].second;

		sort_partial(segments, n);
	}

	free(segments);

	return true;
}
