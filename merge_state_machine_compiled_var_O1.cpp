#include <stdlib.h>
#include <stdio.h>

#include <algorithm>

#include "config.h"
#include "harness.h"

#include "merge_state_machine_compiled_var.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool MergeStateMachineCompiledVarO1::merge(struct test *t, int n) {
	int *segments[8];
	int cache0;
	int cache1;
	int cache2;
	int cache3;
	int cache4;
	int cache5;
	int cache6;

	for (int i = 0; i < n && i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, std::min(n, 8), sizeof(int *), cmp_p);

	cache0 = *segments[0];
	cache1 = *segments[1];
	cache2 = *segments[2];
	if (n > 3)
		cache3 = *segments[3];
	if (n > 4)
		cache4 = *segments[4];
	if (n > 5)
		cache5 = *segments[5];
	if (n > 6)
		cache6 = *segments[6];

	// process
	size_t pos = 0;
	if (n == 3) {
#include "state_machine_var_3.cpp"
	} else if (n == 4) {
#include "state_machine_var_4.cpp"
	} else if (n == 5) {
#include "state_machine_var_5.cpp"
#ifdef STATE6
	} else if (n == 6) {
#include "state_machine_var_6.cpp"
#endif
#ifdef STATE7
	} else if (n == 7) {
#include "state_machine_var_7.cpp"
#endif
	} else {
		return false;
	}

DONE: ;

	return true;
}
