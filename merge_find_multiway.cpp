#include "harness.h"

#include "merge_find_multiway.h"

#include "find_multiway.cpp"

bool MergeFindMultiway::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	// process
	bool out = merge_k(t, n, segments);

	free(segments);

	return out;
}
