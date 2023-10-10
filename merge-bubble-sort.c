#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "config.h"
#include "harness.h"

int *segments[4];

static void sort(int **a, int length) {
	int swapped = 1;
	while (swapped) {
		swapped = 0;
		for (int i = 1; i < length; i++) {
			if (*a[i-1] < *a[i]) {
				int *temp = a[i-1];
				a[i-1] = a[i];
				a[i] = temp;
				swapped = 1;
			}
		}
	}
}

int main() {
	clock_t time_begin = clock();

	struct test *t = harness_new(TEST_SIZE, SEED);

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];

	sort(segments, 4);
	// printf("%d %d %d %d\n", *segments[0], *segments[1], *segments[2], *segments[3]);

	clock_t time_init = clock();
	printf("Init: %f\n", (double)(time_init - time_begin) / CLOCKS_PER_SEC);

	// process
	size_t pos = 0;
	for (;;) {
		t->results[pos++] = *segments[0];

		segments[0]++;
		if (*segments[0] == 0)
			break;
		sort(segments, 4);
	}

	clock_t time_merge = clock();
	printf("Merge: %f\n", (double)(time_merge - time_init) / CLOCKS_PER_SEC);

	printf("Succeeded: %s\n", harness_verify(t) ? "true" : "false");

	clock_t time_verify = clock();
	printf("Verify: %f\n", (double)(time_verify - time_merge) / CLOCKS_PER_SEC);

	return 0;
}
