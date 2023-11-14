#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "harness.h"
#include "state_table_asc_8.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)a - **(int **)b;
}

void merge_state_machine_lookup_table_binary_search_fast_8(struct test *t) {
	int *segments[8];

	for (int i = 0; i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, 8, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_8[state][7];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		int pos = -1;
		if (*segments[priorities_8[state][4 - 1]] < *segments[seg])
			pos = 7 - 4;
		if (*segments[priorities_8[state][pos + 2]] < *segments[seg])
			pos += 2;
		if (*segments[priorities_8[state][pos + 1]] < *segments[seg])
			pos += 1;

		state = transitions_8[state][pos+1];
	}
}

void merge_state_machine_lookup_table_binary_search_fast(struct test *t, int n) {
	if (n == 8)
		merge_state_machine_lookup_table_binary_search_fast_8(t);
}
