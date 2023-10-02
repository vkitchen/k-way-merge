#include <stdlib.h>
#include <stdio.h>

#include "config.h"
#include "harness.h"

int *segments[4];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

int main() {
	struct test *t = harness_new(TEST_SIZE, SEED);

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	qsort(segments, 4, sizeof(int *), cmp_p);

	// process
	for (;;) {
		printf("%d\n", *segments[0]);
		segments[0]++;
		if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
			break;
		qsort(segments, 4, sizeof(int *), cmp_p);
	}
}
