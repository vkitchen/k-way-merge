#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include <algorithm>
#include <array>

#include "config.h"
#include "harness.h"
#include "merge_baseline_copy_sort.h"
#include "merge_quick_sort.h"
#include "merge_std_sort.h"
#include "merge_bubble_sort.h"
#include "merge_bubble_sort_fast.h"
#include "merge_double_bubble_sort.h"
#include "merge_insertion_sort.h"
#include "merge_insertion_sort_fast.h"
#include "merge_insertion_sort_fast_discrete_n.h"
#include "merge_insertion_sort_indexes.h"
#include "merge_avx_sort.h"
#include "merge_heap.h"
#include "merge_state_machine_compiled.h"
#include "merge_state_machine_lookup_table.h"
#include "merge_state_machine_lookup_table_alt.h"
#include "merge_state_machine_lookup_table_asc.h"
#include "merge_state_machine_lookup_table_binary_search.h"
#include "merge_state_machine_lookup_table_binary_search_fast.h"

#define NO_TESTS 7

void (*functions[NO_TESTS]) (struct test *, int) = {
//	merge_quick_sort,
//	merge_std_sort,
//	merge_bubble_sort,
	merge_bubble_sort_fast,
//	merge_double_bubble_sort,
//	merge_insertion_sort,
	merge_insertion_sort_fast,
	merge_insertion_sort_fast_discrete_n,
	merge_insertion_sort_indexes,
	merge_avx_sort,
	merge_heap,
	merge_state_machine_compiled,
//	merge_state_machine_lookup_table,
//	merge_state_machine_lookup_table_alt,
//	merge_state_machine_lookup_table_asc,
//	merge_state_machine_lookup_table_binary_search,
//	merge_state_machine_lookup_table_binary_search_fast,
};

const char *names[NO_TESTS] = {
//	"Quick Sort",
//	"Std Sort",
//	"Bubble Sort",
	"Bubble Sort Fast",
//	"Double Bubble Sort",
//	"Insertion Sort",
	"Insertion Sort Fast",
	"Insertion Sort Fast Discrete N",
	"Insertion Sort Indexes",
	"AVX Sort",
	"Heap",
	"State Machine (Compiled)",
//	"State Machine (Lookup Table)",
//	"State Machine (Lookup Table Alternative)",
//	"State Machine (Lookup Table Ascending)",
//	"State Machine (Binary Search)",
//	"State Machine (Binary Search Fast)",
};

int order[NO_TESTS];

double timings[ARRAY_COUNT+1][NO_TESTS];

int main() {
	for (int i = 0; i < NO_TESTS; i++)
		order[i] = i;

	srand(time(NULL));
	std::random_shuffle(std::begin(order), std::end(order));

	clock_t time_begin = clock();

	struct test *t = harness_new(ARRAY_LENGTH, ARRAY_COUNT, SEED);

	clock_t time_end = clock();

	printf("Init: %f\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("\n## MERGING %d LISTS ##\n", n);

		time_begin = clock();
		merge_baseline_copy_sort(t, n);
		time_end = clock();
		printf("Baseline (copy+sort) %f\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

		for (int i = 0; i < NO_TESTS; i++) {
			harness_reset(t);

			int alg = order[i];

			time_begin = clock();

			(*functions[alg])(t, n);

			time_end = clock();

			const char *status = harness_verify(t, ARRAY_LENGTH, n);

			double runtime = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
			timings[n][alg] = runtime;

			printf("%-40s %-8s %f    %s\n", names[alg], status[0] == '\0' ? "true" : "false", runtime, status);
		}
	}

	puts("");

	printf("n");
	for (int i = 0; i < NO_TESTS; i++)
		printf(",%s", names[i]);
	puts("");


	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("%d", n);
		for (int i = 0; i < NO_TESTS; i++)
			printf(",%f", timings[n][i]);
		puts("");
	}

	return 0;
}
