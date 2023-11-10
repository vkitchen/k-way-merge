#include <stdlib.h>

#include "harness.h"

#include "state_table_asc_4.h"

static int *segments[4];

static int cmp_p(const void *a, const void *b) {
	return **(int **)a - **(int **)b;
}

void merge_state_machine_lookup_table_asc_4(struct test *t) {
	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities[state][2]])
			state = transitions[state][1];
		else if (*segments[seg] >= *segments[priorities[state][3]])
			state = transitions[state][2];
		else
			state = transitions[state][3];
	}
}
