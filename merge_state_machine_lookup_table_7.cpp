#include <stdlib.h>

#include "harness.h"

#include "state_table_7.h"

static int *segments[7];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

void merge_state_machine_lookup_table_7(struct test *t) {
	for (int i = 0; i < 7; i++)
		segments[i] = t->postings[i];

	qsort(segments, 7, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities[state][0];
		size_t seg1 = priorities[state][1];
		size_t seg2 = priorities[state][2];
		size_t seg3 = priorities[state][3];
		size_t seg4 = priorities[state][4];
		size_t seg5 = priorities[state][5];
		size_t seg6 = priorities[state][6];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg]++;
		
		if (*segments[seg] >= *segments[seg1])
			state = transitions[state][0];
		else if (*segments[seg] >= *segments[seg2])
			state = transitions[state][1];
		else if (*segments[seg] >= *segments[seg3])
			state = transitions[state][2];
		else if (*segments[seg] >= *segments[seg4])
			state = transitions[state][3];
		else if (*segments[seg] >= *segments[seg5])
			state = transitions[state][4];
		else if (*segments[seg] >= *segments[seg6])
			state = transitions[state][5];
		else
			state = transitions[state][6];
	}
}