#include <stdlib.h>
#include <stdio.h>

#include <algorithm>

#include "config.h"
#include "harness.h"

#include "merge_state_machine_compiled_binary_search.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool MergeStateMachineCompiledBinarySearch::merge(struct test *t, int n) {
	int *segments[8];

	for (int i = 0; i < n && i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, std::min(n, 8), sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	if (n == 4) {
#include "state_machine_binary_search_4.cpp"
	} else {
		return false;
	}

DONE: ;

	return true;
}
