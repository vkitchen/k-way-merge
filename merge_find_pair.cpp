#include "harness.h"

#include "merge_find_pair.h"

bool MergeFindPair::merge(struct test *t, int n) {
	std::pair<int, int *>*segments = (std::pair<int, int *>*)malloc(sizeof(std::pair<int, int *>) * n);

	for (int i = 0; i < n; i++)
		segments[i] = std::pair<int, int *>(*t->postings[i], t->postings[i]);

	// process
	size_t pos = 0;
	for (;;) {
		int best = 0;

		for (int i = 1; i < n; i++)
			if (segments[i].first > segments[best].first)
				best = i;

		if (segments[best].first == 0)
			break;

		t->results[pos++] = segments[best].first;
		segments[best].first = *++segments[best].second;
	}

	free(segments);

	return true;
}
