#include <stdlib.h>
#include <stdint.h>

#include "harness.h"

#include "state_table_asc_3.h"
#include "state_table_asc_4.h"
#include "state_table_asc_5.h"
#include "state_table_asc_6.h"
#include "state_table_asc_7.h"
#include "state_table_asc_8.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)a - **(int **)b;
}

void merge_state_machine_lookup_table_asc_3(struct test *t) {
	int *segments[3];

	for (int i = 0; i < 3; i++)
		segments[i] = t->postings[i];

	qsort(segments, 3, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_3[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities_3[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities_3[state][2]])
			state = transitions_3[state][1];
		else
			state = transitions_3[state][2];
	}
}

void merge_state_machine_lookup_table_asc_4(struct test *t) {
	int *segments[4];

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_4[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities_4[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities_4[state][2]])
			state = transitions_4[state][1];
		else if (*segments[seg] >= *segments[priorities_4[state][3]])
			state = transitions_4[state][2];
		else
			state = transitions_4[state][3];
	}
}

void merge_state_machine_lookup_table_asc_5(struct test *t) {
	int *segments[5];

	for (int i = 0; i < 5; i++)
		segments[i] = t->postings[i];

	qsort(segments, 5, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_5[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities_5[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities_5[state][2]])
			state = transitions_5[state][1];
		else if (*segments[seg] >= *segments[priorities_5[state][3]])
			state = transitions_5[state][2];
		else if (*segments[seg] >= *segments[priorities_5[state][4]])
			state = transitions_5[state][3];
		else
			state = transitions_5[state][4];
	}
}

void merge_state_machine_lookup_table_asc_6(struct test *t) {
	int *segments[6];

	for (int i = 0; i < 6; i++)
		segments[i] = t->postings[i];

	qsort(segments, 6, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_6[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities_6[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities_6[state][2]])
			state = transitions_6[state][1];
		else if (*segments[seg] >= *segments[priorities_6[state][3]])
			state = transitions_6[state][2];
		else if (*segments[seg] >= *segments[priorities_6[state][4]])
			state = transitions_6[state][3];
		else if (*segments[seg] >= *segments[priorities_6[state][5]])
			state = transitions_6[state][4];
		else
			state = transitions_6[state][5];
	}
}

void merge_state_machine_lookup_table_asc_7(struct test *t) {
	int *segments[7];

	for (int i = 0; i < 7; i++)
		segments[i] = t->postings[i];

	qsort(segments, 7, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_7[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities_7[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities_7[state][2]])
			state = transitions_7[state][1];
		else if (*segments[seg] >= *segments[priorities_7[state][3]])
			state = transitions_7[state][2];
		else if (*segments[seg] >= *segments[priorities_7[state][4]])
			state = transitions_7[state][3];
		else if (*segments[seg] >= *segments[priorities_7[state][5]])
			state = transitions_7[state][4];
		else if (*segments[seg] >= *segments[priorities_7[state][6]])
			state = transitions_7[state][5];
		else
			state = transitions_7[state][6];
	}
}

void merge_state_machine_lookup_table_asc_8(struct test *t) {
	int *segments[8];

	for (int i = 0; i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, 8, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities_8[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities_8[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities_8[state][2]])
			state = transitions_8[state][1];
		else if (*segments[seg] >= *segments[priorities_8[state][3]])
			state = transitions_8[state][2];
		else if (*segments[seg] >= *segments[priorities_8[state][4]])
			state = transitions_8[state][3];
		else if (*segments[seg] >= *segments[priorities_8[state][5]])
			state = transitions_8[state][4];
		else if (*segments[seg] >= *segments[priorities_8[state][6]])
			state = transitions_8[state][5];
		else if (*segments[seg] >= *segments[priorities_8[state][7]])
			state = transitions_8[state][6];
		else
			state = transitions_8[state][7];
	}
}

void merge_state_machine_lookup_table_asc(struct test *t, int n) {
	if (n == 3)
		merge_state_machine_lookup_table_asc_3(t);
	else if (n == 4)
		merge_state_machine_lookup_table_asc_4(t);
	else if (n == 5)
		merge_state_machine_lookup_table_asc_5(t);
	else if (n == 6)
		merge_state_machine_lookup_table_asc_6(t);
	else if (n == 7)
		merge_state_machine_lookup_table_asc_7(t);
	else if (n == 8)
		merge_state_machine_lookup_table_asc_8(t);
}
