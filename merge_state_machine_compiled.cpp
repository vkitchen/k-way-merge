#include <stdlib.h>

#include "harness.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

void merge_state_machine_compiled(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	qsort(segments, n, sizeof(int *), cmp_p);

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
	}

DONE: ;

	free(segments);
}
