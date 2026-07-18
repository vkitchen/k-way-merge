#include <stdlib.h>
#include <stdio.h>

#include <algorithm>

#include "config.h"
#include "harness.h"

#include "merge_state_machine_compiled_var.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool MergeStateMachineCompiledVar::merge(struct test *t, int n) {
	int *segments[8];
	int cache0;
	int cache1;
	int cache2;

	for (int i = 0; i < n && i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, std::min(n, 8), sizeof(int *), cmp_p);

	cache0 = *segments[0];
	cache1 = *segments[1];
	cache2 = *segments[2];

	// process
	size_t pos = 0;
	if (n == 3) {
#include "state_machine_var_3.cpp"
	} else {
		return false;
	}

DONE: ;

	return true;
}
