#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "harness.h"
#include "state_table_asc_3.h"
#include "state_table_asc_4.h"
#include "state_table_asc_5.h"
#include "state_table_asc_6.h"
#include "state_table_asc_7.h"
#include "state_table_asc_8.h"

#include "merge_state_machine_lookup_table_binary_search_fast.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)a - **(int **)b;
}

void merge_state_machine_lookup_table_binary_search_fast_3(struct test *t) {
	int *segments[3];

	for (int i = 0; i < 3; i++)
		segments[i] = t->postings[i];

	qsort(segments, 3, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_3[state][2];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		int pos = -1;
		if (*segments[priorities_3[state][2 - 1]] < *segments[seg])
			pos = 2 - 2;
		if (*segments[priorities_3[state][pos + 1]] < *segments[seg])
			pos += 1;

		state = transitions_3[state][pos+1];
	}
}

void merge_state_machine_lookup_table_binary_search_fast_4(struct test *t) {
	int *segments[4];

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_4[state][3];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		int pos = -1;
		if (*segments[priorities_4[state][2 - 1]] < *segments[seg])
			pos = 3 - 2;
		if (*segments[priorities_4[state][pos + 1]] < *segments[seg])
			pos += 1;

		state = transitions_4[state][pos+1];
	}
}

void merge_state_machine_lookup_table_binary_search_fast_5(struct test *t) {
	int *segments[5];

	for (int i = 0; i < 5; i++)
		segments[i] = t->postings[i];

	qsort(segments, 5, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_5[state][4];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		int pos = -1;
		if (*segments[priorities_5[state][3 - 1]] < *segments[seg])
			pos = 4 - 4;
		if (*segments[priorities_5[state][pos + 2]] < *segments[seg])
			pos += 2;
		if (*segments[priorities_5[state][pos + 1]] < *segments[seg])
			pos += 1;

		state = transitions_5[state][pos+1];
	}
}

void merge_state_machine_lookup_table_binary_search_fast_6(struct test *t) {
	int *segments[6];

	for (int i = 0; i < 6; i++)
		segments[i] = t->postings[i];

	qsort(segments, 6, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_6[state][5];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		int pos = -1;
		if (*segments[priorities_6[state][4 - 1]] < *segments[seg])
			pos = 5 - 4;
		if (*segments[priorities_6[state][pos + 2]] < *segments[seg])
			pos += 2;
		if (*segments[priorities_6[state][pos + 1]] < *segments[seg])
			pos += 1;

		state = transitions_6[state][pos+1];
	}
}

void merge_state_machine_lookup_table_binary_search_fast_7(struct test *t) {
	int *segments[7];

	for (int i = 0; i < 7; i++)
		segments[i] = t->postings[i];

	qsort(segments, 7, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_7[state][6];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;

		int pos = -1;
		if (*segments[priorities_7[state][4 - 1]] < *segments[seg])
			pos = 6 - 4;
		if (*segments[priorities_7[state][pos + 2]] < *segments[seg])
			pos += 2;
		if (*segments[priorities_7[state][pos + 1]] < *segments[seg])
			pos += 1;

		state = transitions_7[state][pos+1];
	}
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

bool MergeStateMachineLookupTableBinarySearchFast::merge(struct test *t, int n) {
	if (n == 3)
		merge_state_machine_lookup_table_binary_search_fast_3(t);
	else if (n == 4)
		merge_state_machine_lookup_table_binary_search_fast_4(t);
	else if (n == 5)
		merge_state_machine_lookup_table_binary_search_fast_5(t);
	else if (n == 6)
		merge_state_machine_lookup_table_binary_search_fast_6(t);
	else if (n == 7)
		merge_state_machine_lookup_table_binary_search_fast_7(t);
	else if (n == 8)
		merge_state_machine_lookup_table_binary_search_fast_8(t);
	else
		return false;

	return true;
}
