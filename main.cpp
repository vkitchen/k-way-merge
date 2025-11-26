#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <algorithm>
#include <array>
#include <chrono>
#include <numeric>
#include <random>

#include "config.h"
#include "harness.h"

#include "merge_baseline_copy_sort.h"
#include "merge_find.h"
#include "merge_find_cache.h"
#include "merge_find_cache_3.h"
#include "merge_find_cache_unrolled.h"
#include "merge_find_cache_unrolled_alt.h"
#include "merge_find_cache_unrolled_best.h"
#include "merge_find_cache_unrolled_simd.h"
#include "merge_find_cache_simd.h"
#include "merge_quick_sort.h"
#include "merge_std_sort.h"
#include "merge_bubble_sort.h"
#include "merge_bubble_sort_fast.h"
#include "merge_double_bubble_sort.h"
#include "merge_insertion_sort.h"
#include "merge_insert.h"
#include "merge_insert_cache.h"
#include "merge_insert_cache_pair.h"
#include "merge_insert_discrete_n.h"
#include "merge_insertion_sort_indexes.h"
#include "merge_avx_sort.h"
#include "merge_avx_sort_discrete_n.h"
#include "merge_avx_sort_pointers.h"
#include "merge_avx_sort_binary_search.h"
#include "merge_pseudo_avx_sort.h"
#include "merge_pseudo_avx_sort_binary_search.h"
#include "merge_heap.h"
#include "merge_heap_cache.h"
#include "merge_heap_separate_init.h"
#include "merge_heap_stl.h"
#include "merge_heap_stl_naive.h"
#include "merge_tournament.h"
#include "merge_tournament_cache.h"
#include "merge_tournament_cache_separate_init.h"
#include "merge_state_machine_compiled.h"
#include "merge_state_machine_compiled_cache.h"
#include "merge_state_machine_compiled_binary_search_cache.h"
#include "merge_state_machine_lookup_table.h"
#include "merge_state_machine_lookup_table_alt.h"
#include "merge_state_machine_lookup_table_asc.h"
#include "merge_state_machine_lookup_table_binary_search.h"
#include "merge_state_machine_lookup_table_binary_search_fast.h"

Merge *functions[] = {
//	new MergeBaselineCopySort,
//
//	new MergeFind,
	new MergeFindCache,
//	new MergeFindCache3,
	new MergeFindCacheUnrolled,
//	new MergeFindCacheUnrolledAlt,
	new MergeFindCacheUnrolledBest,
//	new MergeFindCacheUnrolledSimd,
//	new MergeFindCacheSimd,
//
//	new MergeQuickSort,
//	new MergeStdSort,
//
//	new MergeBubbleSort,
//	new MergeBubbleSortFast,
//	new MergeDoubleBubbleSort,
//
//	new MergeInsertionSort,
//	new MergeInsert,
//	new MergeInsertCache,
//	new MergeInsertCachePair,
//	new MergeInsertDiscreteN,
//	new MergeInsertionSortIndexes,
//
//	new MergeAvxSort,
//	new MergeAvxSortDiscreteN,
//	new MergeAvxSortPointers,
//	new MergeAvxSortBinarySearch,
//	new MergePseudoAvxSort,
//	new MergePseudoAvxSortBinarySearch,
//
//	new MergeHeap(),
//	new MergeHeapCache(),
//	new MergeHeapSeparateInit(),
//	new MergeHeapStl(),
//	new MergeHeapStlNaive,
//
//	new MergeTournament(),
//	new MergeTournamentCache(),
//	new MergeTournamentCacheSeparateInit(),
//
//	new MergeStateMachineCompiled,
	new MergeStateMachineCompiledCache,
	new MergeStateMachineCompiledBinarySearchCache,
//	new MergeStateMachineLookupTable,
//	new MergeStateMachineLookupTableAlt,
//	new MergeStateMachineLookupTableAsc,
//	new MergeStateMachineLookupTableBinarySearch,
//	new MergeStateMachineLookupTableBinarySearchFast,
//
//	new MergeFindCacheUnrolledO0,
	new MergeFindCacheUnrolledO1,
	new MergeFindCacheUnrolledO2,
	new MergeFindCacheUnrolledO3,
	new MergeFindCacheUnrolledOs,
	new MergeFindCacheUnrolledOz,
//
//	new MergeFindCacheSimdO0,
	new MergeFindCacheSimdO1,
	new MergeFindCacheSimdO2,
	new MergeFindCacheSimdO3,
	new MergeFindCacheSimdOs,
	new MergeFindCacheSimdOz,
//
//	new MergeInsertO0,
//	new MergeInsertO1,
//	new MergeInsertO2,
//	new MergeInsertO3,
//	new MergeInsertOs,
//	new MergeInsertOz,
//
//	new MergeInsertCacheO0,
	new MergeInsertCacheO1,
	new MergeInsertCacheO2,
	new MergeInsertCacheO3,
	new MergeInsertCacheOs,
	new MergeInsertCacheOz,
//
//	new MergeHeapO0,
//	new MergeHeapO1,
//	new MergeHeapO2,
//	new MergeHeapO3,
//	new MergeHeapOs,
//	new MergeHeapOz,
//
//	new MergeHeapCacheO0,
	new MergeHeapCacheO1,
	new MergeHeapCacheO2,
	new MergeHeapCacheO3,
	new MergeHeapCacheOs,
	new MergeHeapCacheOz,
//
//	new MergeTournamentCacheO0(),
	new MergeTournamentCacheO1(),
	new MergeTournamentCacheO2(),
	new MergeTournamentCacheO3(),
	new MergeTournamentCacheOs(),
	new MergeTournamentCacheOz(),
//
//	new MergeStateMachineCompiledO0,
//	new MergeStateMachineCompiledO1,
//	new MergeStateMachineCompiledO2,
//	new MergeStateMachineCompiledO3,
//	new MergeStateMachineCompiledOs,
//	new MergeStateMachineCompiledOz,
//
//	new MergeStateMachineCompiledCacheO0,
	new MergeStateMachineCompiledCacheO1,
	new MergeStateMachineCompiledCacheO2,
	new MergeStateMachineCompiledCacheO3,
	new MergeStateMachineCompiledCacheOs,
	new MergeStateMachineCompiledCacheOz,
};

const size_t num_tests = sizeof(functions) / sizeof(Merge *);

int order[num_tests];

long timings[ARRAY_COUNT+1][num_tests][3];
long inits[ITER_COUNT];
long iterations[ITER_COUNT];

int main() {
	for (size_t i = 0; i < num_tests; i++)
		order[i] = i;

	unsigned int seed = (SEED == 0) ? time(NULL) : SEED;
	srand(seed);
	printf("COMPILER_VERSION %s\n", __VERSION__);
	printf("ARRAY_LENGTH %d\n", ARRAY_LENGTH);
	printf("ARRAY_COUNT %d\n", ARRAY_COUNT);
	printf("ITER_COUNT %d\n", ITER_COUNT);
	printf("NUM_TESTS %zd\n", num_tests);
#ifdef ORDERED_TESTS
	puts("TEST_TYPE ordered");
#else
	puts("TEST_TYPE random");
#endif
	printf("SEED %d\n", seed);

	std::mt19937 mt(seed);
	std::shuffle(std::begin(order), std::end(order), mt);

	auto time_begin = std::chrono::steady_clock::now();

	struct test *t = harness_new(ARRAY_LENGTH, ARRAY_COUNT);

#ifdef ORDERED_TESTS
	harness_generate_ordered(t);
#else
	harness_generate(t);
#endif

	auto time_end = std::chrono::steady_clock::now();

	puts("");
	printf("Init: %ld\n", std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count());

	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("\n## MERGING %d LISTS ##\n", n);

		time_begin = std::chrono::steady_clock::now();
		merge_baseline_copy_sort(t, n);
		time_end = std::chrono::steady_clock::now();
		printf("Baseline (copy+sort) %ld\n", std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count());
		puts("Name                                     | Success | Init   | Min, Med, Max     | Standard Deviation | Error Msg");
		puts("----------------------------------------------------------------------------------------------------------------");

		for (size_t i = 0; i < num_tests; i++) {
			harness_reset(t);

			int alg = order[i];

			bool init_res, res;

			for (int j = 0; j < ITER_COUNT; j++) {
				/* init */
				time_begin = std::chrono::steady_clock::now();

				init_res = functions[alg]->init(t, n);

				time_end = std::chrono::steady_clock::now();
				inits[j] = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count();

				/* run */
				time_begin = std::chrono::steady_clock::now();

				res = functions[alg]->merge(t, n);

				time_end = std::chrono::steady_clock::now();
				iterations[j] = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count();
			}

			const char *status = harness_verify(t, ARRAY_LENGTH, n);

			std::sort(&iterations[0], &iterations[ITER_COUNT]);

			double mean = std::accumulate(&iterations[0], &iterations[ITER_COUNT], 0.0) / ITER_COUNT;

			double variance = std::accumulate(&iterations[0], &iterations[ITER_COUNT], 0.0, [mean](double acc, long val) {
				return acc + (val - mean)*(val - mean) / (double)ITER_COUNT;
			});

			double sd = sqrt(variance);

			timings[n][alg][0] = iterations[0];
			timings[n][alg][1] = iterations[ITER_COUNT / 2];
			timings[n][alg][2] = iterations[ITER_COUNT-1];

			char init_buffer[8] = "?";
			if (init_res) {
				double init_mean = std::accumulate(&inits[0], &inits[ITER_COUNT], 0.0) / ITER_COUNT;
				sprintf(init_buffer, "%.0f", init_mean);
			}
			char time_buffer[32] = "?";
			char sd_buffer[32] = "?";
			if (res) {
				sprintf(time_buffer, "%ld,%ld,%ld", iterations[0], iterations[ITER_COUNT/2], iterations[ITER_COUNT-1]);
				sprintf(sd_buffer, "%.4f", sd);
			}
			char status_buffer[64] = "";
			if (res) {
				if (strlen(status) > 0) {
					strcpy(status_buffer, " ");
					strcpy(&status_buffer[1], status);
				}
			} else {
				strcpy(status_buffer, " Unsupported");
			}
			printf("%-40s | %-7s | %6s | %17s | %18s |%s\n", functions[alg]->name.c_str(), status[0] == '\0' ? "true" : "false", init_buffer, time_buffer, sd_buffer, status_buffer);
		}
	}

	puts("");

	printf("n");
	for (size_t i = 0; i < num_tests; i++)
		printf(",%s", functions[i]->name.c_str());
	puts("");


	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("%d", n);
		for (size_t i = 0; i < num_tests; i++)
			printf(",%ld", timings[n][i][1]);
		puts("");
	}

	puts("");

	printf("n");
	for (size_t i = 0; i < num_tests; i++)
		printf(",%s (min),%s (med),%s (max)", functions[i]->name.c_str(), functions[i]->name.c_str(), functions[i]->name.c_str());
	puts("");


	for (int n = 3; n <= ARRAY_COUNT; n++) {
		printf("%d", n);
		for (size_t i = 0; i < num_tests; i++) {
			printf(",%ld", timings[n][i][0]);
			printf(",%ld", timings[n][i][1]);
			printf(",%ld", timings[n][i][2]);
		}
		puts("");
	}

	return 0;
}
