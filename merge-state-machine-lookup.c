#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "config.h"
#include "harness.h"

#include "state-tables.h"

int *segments[4];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

int main() {
	clock_t time_begin = clock();

	struct test *t = harness_new(TEST_SIZE, SEED);

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	clock_t time_init = clock();
	printf("Init: %f\n", (double)(time_init - time_begin) / CLOCKS_PER_SEC);

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

	clock_t time_merge = clock();
	printf("Merge: %f\n", (double)(time_merge - time_init) / CLOCKS_PER_SEC);

	printf("Succeeded: %s\n", harness_verify(t) ? "true" : "false");

	clock_t time_verify = clock();
	printf("Verify: %f\n", (double)(time_verify - time_merge) / CLOCKS_PER_SEC);

	return 0;
}
