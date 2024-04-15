#include <stdlib.h>
#include <stdio.h>

#include <algorithm>
#include <array>
#include <chrono>

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
#include "merge_avx_sort_discrete_n.h"
#include "merge_avx_sort_pointers.h"
#include "merge_avx_sort_binary_search.h"
#include "merge_pseudo_avx_sort.h"
#include "merge_pseudo_avx_sort_binary_search.h"
#include "merge_heap.h"
#include "merge_state_machine_compiled.h"
#include "merge_state_machine_lookup_table.h"
#include "merge_state_machine_lookup_table_alt.h"
#include "merge_state_machine_lookup_table_asc.h"
#include "merge_state_machine_lookup_table_binary_search.h"
#include "merge_state_machine_lookup_table_binary_search_fast.h"

#define NO_TESTS 11

bool (*functions[NO_TESTS]) (struct test *, int) = {
//	merge_quick_sort,
//	merge_std_sort,
//	merge_bubble_sort,
	merge_bubble_sort_fast,
//	merge_double_bubble_sort,
//	merge_insertion_sort,
	merge_insertion_sort_fast,
//	merge_insertion_sort_fast_discrete_n,
	merge_insertion_sort_indexes,
	merge_avx_sort,
	merge_avx_sort_discrete_n,
	merge_avx_sort_pointers,
	merge_avx_sort_binary_search,
	merge_pseudo_avx_sort,
	merge_pseudo_avx_sort_binary_search,
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
//	"Insertion Sort Fast Discrete N",
	"Insertion Sort Indexes",
	"AVX Sort",
	"AVX Sort Discrete N",
	"AVX Sort (Pointers)",
	"AVX Sort (Binary Search)",
	"Pseudo AVX Sort",
	"Pseudo AVX Sort (Binary Search)",
	"Heap",
	"State Machine (Compiled)",
//	"State Machine (Lookup Table)",
//	"State Machine (Lookup Table Alternative)",
//	"State Machine (Lookup Table Ascending)",
//	"State Machine (Binary Search)",
//	"State Machine (Binary Search Fast)",
};

int order[NO_TESTS];

long timings[ARRAY_COUNT+1][NO_TESTS];

int main() {
	for (int i = 0; i < NO_TESTS; i++)
		order[i] = i;

	unsigned int seed = (SEED == 0) ? time(NULL) : SEED;
	srand(seed);
	printf("Seed: %d\n", seed);

	std::random_shuffle(std::begin(order), std::end(order));

	auto time_begin = std::chrono::steady_clock::now();

	struct test *t = harness_new(ARRAY_LENGTH, ARRAY_COUNT);
	harness_generate(t);

	auto time_end = std::chrono::steady_clock::now();

	printf("Init: %ld\n", std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count());

	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("\n## MERGING %d LISTS ##\n", n);

		time_begin = std::chrono::steady_clock::now();
		merge_baseline_copy_sort(t, n);
		time_end = std::chrono::steady_clock::now();
		printf("Baseline (copy+sort) %ld\n", std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count());

		for (int i = 0; i < NO_TESTS; i++) {
			harness_reset(t);

			int alg = order[i];

			time_begin = std::chrono::steady_clock::now();

			bool res = (*functions[alg])(t, n);

			time_end = std::chrono::steady_clock::now();

			const char *status = harness_verify(t, ARRAY_LENGTH, n);

			long runtime = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count();
			timings[n][alg] = runtime;

			printf("%-40s %-8s %ld    %s\n", names[alg], status[0] == '\0' ? "true" : "false", runtime, res ? status : "unsupported");
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
			printf(",%ld", timings[n][i]);
		puts("");
	}

	return 0;
}
