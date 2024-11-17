#include <stdlib.h>

#include <algorithm>

#include "config.h"
#include "harness.h"

#include "merge_state_machine_compiled.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool MergeStateMachineCompiledOz::merge(struct test *t, int n) {
	int *segments[8];

	for (int i = 0; i < n && i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, std::min(n, 8), sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	if (n == 3) {
#include "state_machine_3.cpp"
	} else if (n == 4) {
#include "state_machine_4.cpp"
	} else if (n == 5) {
#include "state_machine_5.cpp"
#ifdef STATE6
	} else if (n == 6) {
#include "state_machine_6.cpp"
#endif
#ifdef STATE7
	} else if (n == 7) {
#include "state_machine_7.cpp"
#endif
	} else {
		return false;
	}

DONE: ;

	return true;
}
