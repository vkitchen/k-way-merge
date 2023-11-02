#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include <algorithm>
#include <array>

#include "config.h"
#include "harness.h"
#include "merge_quick_sort.h"
#include "merge_bubble_sort.h"
#include "merge_insertion_sort.h"
#include "merge_heap.h"
#include "merge_state_machine_compiled.h"
#include "merge_state_machine_lookup_table.h"
#include "merge_state_machine_lookup_table_alt.h"

#define NO_TESTS 7

void (*functions[NO_TESTS]) (struct test *, int) = {
	merge_quick_sort,
	merge_bubble_sort,
	merge_insertion_sort,
	merge_heap,
	merge_state_machine_compiled,
	merge_state_machine_lookup_table,
	merge_state_machine_lookup_table_alt,
};

const char *names[NO_TESTS] = {
	"Quick Sort",
	"Bubble Sort",
	"Insertion Sort",
	"Heap",
	"State Machine (Compiled)",
	"State Machine (Lookup Table)",
	"State Machine (Lookup Table, Alternative)",
};

int order[NO_TESTS] = {0, 1, 2, 3, 4, 5, 6};

int main() {
	srand(time(NULL));
	std::random_shuffle(std::begin(order), std::end(order));

	clock_t time_begin = clock();

	struct test *t = harness_new(ARRAY_LENGTH, ARRAY_COUNT, SEED);

	clock_t time_end = clock();

	printf("Init: %f\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("\n## MERGING %d LISTS ##\n", n);
		for (int i = 0; i < NO_TESTS; i++) {
			harness_reset(t);

			int alg = order[i];

			time_begin = clock();

			(*functions[alg])(t, n);

			time_end = clock();

			printf("%s %s %f\n", names[alg], harness_verify(t, ARRAY_LENGTH, n) ? "true" : "false", (double)(time_end - time_begin) / CLOCKS_PER_SEC);
		}
	}

	return 0;
}
