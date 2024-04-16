#include <stdlib.h>

#include <algorithm>

#include "harness.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool merge_state_machine_compiled_O3(struct test *t, int n) {
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
	} else if (n == 6) {
#include "state_machine_6.cpp"
	} else {
		return false;
	}

DONE: ;

	return true;
}
