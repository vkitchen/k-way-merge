#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "config.h"
#include "harness.h"
#include "merge_quick_sort.h"
#include "merge_bubble_sort.h"
#include "merge_insertion_sort.h"
#include "merge_heap.h"
#include "merge_state_machine_compiled.h"
#include "merge_state_machine_lookup_table.h"

#define NO_TESTS 6

void (*functions[NO_TESTS]) (struct test *) = {
	merge_quick_sort,
	merge_bubble_sort,
	merge_insertion_sort,
	merge_heap,
	merge_state_machine_compiled,
	merge_state_machine_lookup_table,
};

const char *names[NO_TESTS] = {
	"Quick Sort",
	"Bubble Sort",
	"Insertion Sort",
	"Heap",
	"State Machine (Compiled)",
	"State Machine (Lookup Table)",
};

int main() {
	functions[0] = merge_quick_sort;
	functions[1] = merge_bubble_sort;
	functions[2] = merge_insertion_sort;
	functions[3] = merge_heap;
	functions[4] = merge_state_machine_compiled;
	functions[5] = merge_state_machine_lookup_table;

	names[0] = "Quick Sort";
	names[1] = "Bubble Sort";
	names[2] = "Insertion Sort";
	names[3] = "Heap";
	names[4] = "State Machine (Compiled)";
	names[5] = "State Machine (Lookup Table)";

	clock_t time_begin = clock();

	struct test *t = harness_new(TEST_SIZE, SEED);

	clock_t time_end = clock();

	printf("Init: %f\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

	for (int i = 0; i < NO_TESTS; i++) {
		time_begin = clock();

		(*functions[i])(t);

		time_end = clock();

		printf("%s %s %f\n", names[i], harness_verify(t) ? "true" : "false", (double)(time_end - time_begin) / CLOCKS_PER_SEC);
	}

	return 0;
}
