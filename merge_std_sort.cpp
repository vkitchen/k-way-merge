#include <stdlib.h>

#include <algorithm>

#include "harness.h"

#include "merge_std_sort.h"

bool MergeStdSort::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	std::sort(segments, segments + n, [](int *a, int *b) { return *a > *b; });

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0]++;

		std::sort(segments, segments + n, [](int *a, int *b) { return *a > *b; });
	}

	free(segments);

	return true;
}
