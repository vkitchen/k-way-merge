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

static int cmp_p(const void *a, const void *b) {
	return **(int **)a - **(int **)b;
}

void merge_state_machine_lookup_table_binary_search_3(struct test *t) {
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

		int res = -1, low = 0, high = 2;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (*segments[seg] == *segments[priorities_3[state][mid]]) {
				res = mid;
				break;
			} else if (*segments[seg] > *segments[priorities_3[state][mid]])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (res == -1)
			res = low;

		state = transitions_3[state][res];
	}
}

void merge_state_machine_lookup_table_binary_search_4(struct test *t) {
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

		int res = -1, low = 0, high = 3;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (*segments[seg] == *segments[priorities_4[state][mid]]) {
				res = mid;
				break;
			} else if (*segments[seg] > *segments[priorities_4[state][mid]])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (res == -1)
			res = low;

		state = transitions_4[state][res];
	}
}

void merge_state_machine_lookup_table_binary_search_5(struct test *t) {
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

		int res = -1, low = 0, high = 4;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (*segments[seg] == *segments[priorities_5[state][mid]]) {
				res = mid;
				break;
			} else if (*segments[seg] > *segments[priorities_5[state][mid]])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (res == -1)
			res = low;

		state = transitions_5[state][res];
	}
}

void merge_state_machine_lookup_table_binary_search_6(struct test *t) {
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

		int res = -1, low = 0, high = 5;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (*segments[seg] == *segments[priorities_6[state][mid]]) {
				res = mid;
				break;
			} else if (*segments[seg] > *segments[priorities_6[state][mid]])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (res == -1)
			res = low;

		state = transitions_6[state][res];
	}
}

void merge_state_machine_lookup_table_binary_search_7(struct test *t) {
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

		int res = -1, low = 0, high = 6;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (*segments[seg] == *segments[priorities_7[state][mid]]) {
				res = mid;
				break;
			} else if (*segments[seg] > *segments[priorities_7[state][mid]])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (res == -1)
			res = low;

		state = transitions_7[state][res];
	}
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
	if (n == 3)
		merge_state_machine_lookup_table_binary_search_3(t);
	else if (n == 4)
		merge_state_machine_lookup_table_binary_search_4(t);
	else if (n == 5)
		merge_state_machine_lookup_table_binary_search_5(t);
	else if (n == 6)
		merge_state_machine_lookup_table_binary_search_6(t);
	else if (n == 7)
		merge_state_machine_lookup_table_binary_search_7(t);
	else if (n == 8)
		merge_state_machine_lookup_table_binary_search_8(t);
}
