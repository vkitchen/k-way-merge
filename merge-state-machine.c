#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "config.h"
#include "harness.h"

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
#include "state-machine.c"

	clock_t time_merge = clock();
	printf("Merge: %f\n", (double)(time_merge - time_init) / CLOCKS_PER_SEC);

	printf("Succeeded: %s\n", harness_verify(t) ? "true" : "false");

	clock_t time_verify = clock();
	printf("Verify: %f\n", (double)(time_verify - time_merge) / CLOCKS_PER_SEC);

	return 0;
}
