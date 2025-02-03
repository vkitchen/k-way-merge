#include "harness.h"

#include "merge_find.h"

bool MergeFind::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	// process
	size_t pos = 0;
	for (;;) {
		int best = 0;

		for (int i = 1; i < n; i++)
			if (*segments[i] > *segments[best])
				best = i;

		if (*segments[best] == 0)
			break;

		t->results[pos++] = *segments[best]++;
	}

	free(segments);

	return true;
}
