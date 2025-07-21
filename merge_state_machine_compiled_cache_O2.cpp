#include <stdlib.h>
#include <stdio.h>

#include <algorithm>

#include "config.h"
#include "harness.h"

#include "merge_state_machine_compiled_cache.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool MergeStateMachineCompiledCacheO2::merge(struct test *t, int n) {
	int *segments[8];
	int cache[8];

	for (int i = 0; i < n && i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, std::min(n, 8), sizeof(int *), cmp_p);

	for (int i = 0; i < n && i < 8; i++)
		cache[i] = *segments[i];

	// process
	size_t pos = 0;
	if (n == 3) {
#include "state_machine_cache_3.cpp"
	} else if (n == 4) {
#include "state_machine_cache_4.cpp"
	} else if (n == 5) {
#include "state_machine_cache_5.cpp"
#ifdef STATE6
	} else if (n == 6) {
#include "state_machine_cache_6.cpp"
#endif
#ifdef STATE7
	} else if (n == 7) {
#include "state_machine_cache_7.cpp"
#endif
	} else {
		return false;
	}

DONE: ;

	return true;
}
