#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "harness.h"
#include "state_table_asc_8.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)a - **(int **)b;
}

void merge_state_machine_lookup_table_binary_search_8(struct test *t) {
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

		int res = -1, low = 0, high = 7;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (*segments[seg] == *segments[priorities_8[state][mid]]) {
				res = mid;
				break;
			} else if (*segments[seg] > *segments[priorities_8[state][mid]])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (res == -1)
			res = low;

		state = transitions_8[state][res];
	}
}

void merge_state_machine_lookup_table_binary_search(struct test *t, int n) {
	if (n == 8)
		merge_state_machine_lookup_table_binary_search_8(t);
}
