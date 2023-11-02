#include <stdlib.h>

#include "harness.h"

static int *segments[4];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

void merge_state_machine_compiled(struct test *t, int n) {
	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
#include "state-machine.cpp"
}
