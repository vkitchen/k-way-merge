#include <stdlib.h>

#include "harness.h"

#include "state-tables.h"

static int *segments[4];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

void merge_state_machine_lookup_table(struct test *t) {
	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities[state][0];
		size_t seg1 = priorities[state][1];
		size_t seg2 = priorities[state][2];
		size_t seg3 = priorities[state][3];

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		if (*segments[seg] == 0)
			break;
		
		if (*segments[seg] >= *segments[seg1])
			state = transitions[state][0];
		else if (*segments[seg] >= *segments[seg2])
			state = transitions[state][1];
		else if (*segments[seg] >= *segments[seg3])
			state = transitions[state][2];
		else
			state = transitions[state][3];
	}
}
