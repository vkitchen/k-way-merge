#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <algorithm>
#include <array>
#include <chrono>
#include <format>
#include <fstream>
#include <iostream>
#include <numeric>
#include <random>

#include "config.h"
#include "harness.h"

#include "merge_baseline_copy_sort.h"
#include "merge_baseline_copy_wolfsort.h"
#include "merge_find.h"
#include "merge_find_cache.h"
#include "merge_find_pair.h"
#include "merge_find_multiway.h"
#include "merge_find_multiway_cache.h"
#include "merge_find_multiway_var.h"
#include "merge_find_branchless_cache.h"
#include "merge_find_branchless_cache_unrolled.h"
#include "merge_find_cache_3.h"
#include "merge_find_cache_unrolled_alt.h"
#include "merge_find_cache_unrolled_best.h"
#include "merge_find_cache_unrolled_simd.h"
#include "merge_find_cache_simd.h"
#include "merge_find_cache_simd_unrolled.h"
#include "merge_quick_sort.h"
#include "merge_std_sort.h"
#include "merge_bubble_sort.h"
#include "merge_double_bubble_sort.h"
#include "merge_bubble.h"
#include "merge_bubble_cache.h"
#include "merge_bubble_branchless.h"
#include "merge_bubble_branchless_partially_unrolled.h"
#include "merge_bubble_branchless_manually_unrolled.h"
#include "merge_bubble_branchless_cache.h"
#include "merge_bubble_branchless_cache_partially_unrolled.h"
#include "merge_bubble_branchless_cache_manually_unrolled.h"
#include "merge_bubble_branchless_pair.h"
#include "merge_bubble_branchless_unrolled.h"
#include "merge_bubble_branchless_unrolled_cache.h"
#include "merge_double_bubble.h"
#include "merge_double_bubble_unrolled.h"
#include "merge_double_bubble_cache.h"
#include "merge_insertion_sort.h"
#include "merge_insert.h"
#include "merge_insert_cache.h"
#include "merge_insert_cache_pair.h"
#include "merge_insert_discrete_n.h"
#include "merge_insert_binary.h"
#include "merge_insertion_sort_indexes.h"
#include "merge_avx_sort.h"
#include "merge_avx_sort_discrete_n.h"
#include "merge_avx_sort_pointers.h"
#include "merge_avx_sort_binary_search.h"
#include "merge_pseudo_avx_sort.h"
#include "merge_pseudo_avx_sort_binary_search.h"
#include "merge_heap.h"
#include "merge_heap_cache.h"
#include "merge_heap_floyds.h"
#include "merge_heap_branchless_child.h"
#include "merge_heap_branchless.h"
#include "merge_heap_branchless_pair.h"
#include "merge_heap_branchless_parallel.h"
#include "merge_heap_branchless_parallel_early_terminate.h"
#include "merge_heap_3ary_branchless_parallel.h"
#include "merge_heap_4ary.h"
#include "merge_heap_4ary_cache.h"
#include "merge_heap_4ary_parallel.h"
#include "merge_heap_4ary_branchless_parallel.h"
#include "merge_heap_8ary_parallel.h"
#include "merge_heap_8ary_parallel_simd.h"
#include "merge_heap_8ary_branchless_parallel.h"
#include "merge_heap_8ary_branchless_parallel_simd.h"
#include "merge_heap_separate_init.h"
#include "merge_heap_stl.h"
#include "merge_heap_stl_naive.h"
#include "merge_tournament.h"
#include "merge_tournament_cache.h"
#include "merge_tournament_cache_separate_init.h"
#include "merge_tournament_external.h"
#include "merge_tournament_external_cache.h"
#include "merge_tournament_branchless.h"
#include "merge_tournament_cache_branchless.h"
#include "merge_tournament_external_branchless.h"
#include "merge_tournament_external_cache_branchless.h"
#include "merge_tournament_4ary.h"
#include "merge_tournament_8ary.h"
#include "merge_loser_4ary.h"
#include "merge_loser_8ary.h"
#include "merge_state_machine_compiled.h"
#include "merge_state_machine_compiled_cache.h"
#include "merge_state_machine_compiled_var.h"
#include "merge_state_machine_compiled_binary_search.h"
#include "merge_state_machine_compiled_binary_search_cache.h"
#include "merge_state_machine_lookup_table.h"
#include "merge_state_machine_lookup_table_alt.h"
#include "merge_state_machine_lookup_table_asc.h"
#include "merge_state_machine_lookup_table_binary_search.h"
#include "merge_state_machine_lookup_table_binary_search_fast.h"

Merge *functions[] = {
	new MergeBaselineCopySort,
//	new MergeBaselineCopyWolfSort,
//
//	new MergeFind,
//	new MergeFindCache,
//	new MergeFindPair,
//	new MergeFindMultiway,
//	new MergeFindMultiwayCache,
//	new MergeFindMultiwayVar,
//	new MergeFindBranchlessCache,
//	new MergeFindBranchlessCacheUnrolled,
//	new MergeFindCache3,
//	new MergeFindCacheUnrolledAlt,
//	new MergeFindCacheUnrolledBest,
//	new MergeFindCacheUnrolledSimd,
//	new MergeFindCacheSimd,
//	new MergeFindCacheSimdUnrolled,
//
//	new MergeQuickSort,
//	new MergeStdSort,
//
//	new MergeBubbleSort,
//	new MergeDoubleBubbleSort,
//	new MergeBubble,
//	new MergeBubbleCache,
//	new MergeBubbleBranchless,
//	new MergeBubbleBranchlessPartiallyUnrolled,
//	new MergeBubbleBranchlessManuallyUnrolled,
//	new MergeBubbleBranchlessCache,
//	new MergeBubbleBranchlessCachePartiallyUnrolled,
//	new MergeBubbleBranchlessCacheManuallyUnrolled,
//	new MergeBubbleBranchlessPair,
//	new MergeBubbleBranchlessUnrolled,
//	new MergeBubbleBranchlessUnrolledCache,
//	new MergeDoubleBubble,
//	new MergeDoubleBubbleUnrolled,
//	new MergeDoubleBubbleCache,
//
//	new MergeInsertionSort,
//	new MergeInsert,
//	new MergeInsertCache,
//	new MergeInsertCachePair,
//	new MergeInsertDiscreteN,
//	new MergeInsertBinary,
//	new MergeInsertionSortIndexes,
//
//	new MergeAvxSort,
//	new MergeAvxSortDiscreteN,
//	new MergeAvxSortPointers,
//	new MergeAvxSortBinarySearch,
//	new MergePseudoAvxSort,
//	new MergePseudoAvxSortBinarySearch,
//
//	new MergeHeap,
//	new MergeHeapCache,
//	new MergeHeapFloyds,
//	new MergeHeapBranchlessChild,
//	new MergeHeapBranchless,
//	new MergeHeapBranchlessPair,
//	new MergeHeapBranchlessParallel,
//	new MergeHeapBranchlessParallelEarlyTerminate,
//	new MergeHeap3aryBranchlessParallel,
//	new MergeHeap4ary,
//	new MergeHeap4aryCache,
//	new MergeHeap4aryParallel,
//	new MergeHeap4aryBranchlessParallel,
//	new MergeHeap8aryParallel,
//	new MergeHeap8aryParallelSimd,
//	new MergeHeap8aryBranchlessParallel,
//	new MergeHeap8aryBranchlessParallelSimd,
//	new MergeHeapSeparateInit,
//	new MergeHeapStl,
//	new MergeHeapStlNaive,
//
//	new MergeTournamentCacheSeparateInit,
//	new MergeTournament,
//	new MergeTournamentCache,
//	new MergeTournamentExternal,
//	new MergeTournamentExternalCache,
//	new MergeTournamentBranchless,
//	new MergeTournamentCacheBranchless,
//	new MergeTournamentExternalBranchless,
//	new MergeTournamentExternalCacheBranchless,
//	new MergeTournament4ary,
//	new MergeTournament8ary,
//	new MergeLoser4ary,
//	new MergeLoser8ary,
//
//	new MergeStateMachineCompiled,
//	new MergeStateMachineCompiledCache,
//	new MergeStateMachineCompiledVar,
//	new MergeStateMachineCompiledBinarySearch,
//	new MergeStateMachineCompiledBinarySearchCache,
//	new MergeStateMachineLookupTable,
//	new MergeStateMachineLookupTableAlt,
//	new MergeStateMachineLookupTableAsc,
//	new MergeStateMachineLookupTableBinarySearch,
//	new MergeStateMachineLookupTableBinarySearchFast,
//
//	new MergeBaselineCopySortO1,
//	new MergeBaselineCopySortO2,
//	new MergeBaselineCopySortO3,
//	new MergeBaselineCopySortOs,
//	new MergeBaselineCopySortOz,
//
//	new MergeFindBranchlessCacheO1,
//	new MergeFindBranchlessCacheO2,
//	new MergeFindBranchlessCacheO3,
//	new MergeFindBranchlessCacheOs,
//	new MergeFindBranchlessCacheOz,
//
//	new MergeFindCacheSimdO1,
//	new MergeFindCacheSimdO2,
//	new MergeFindCacheSimdO3,
//	new MergeFindCacheSimdOs,
//	new MergeFindCacheSimdOz,
//
//	new MergeInsertCachePairO1,
//	new MergeInsertCachePairO2,
//	new MergeInsertCachePairO3,
//	new MergeInsertCachePairOs,
//	new MergeInsertCachePairOz,
//
//	new MergeBubbleBranchlessO1,
//	new MergeBubbleBranchlessO2,
//	new MergeBubbleBranchlessO3,
//	new MergeBubbleBranchlessOs,
//	new MergeBubbleBranchlessOz,
//
//	new MergeBubbleBranchlessCacheO1,
//	new MergeBubbleBranchlessCacheO2,
//	new MergeBubbleBranchlessCacheO3,
//	new MergeBubbleBranchlessCacheOs,
//	new MergeBubbleBranchlessCacheOz,
//
//	new MergeBubbleBranchlessCacheManuallyUnrolledO1,
//	new MergeBubbleBranchlessCacheManuallyUnrolledO2,
//	new MergeBubbleBranchlessCacheManuallyUnrolledO3,
//	new MergeBubbleBranchlessCacheManuallyUnrolledOs,
//	new MergeBubbleBranchlessCacheManuallyUnrolledOz,
//
//	new MergeHeapBranchlessParallelO1,
//	new MergeHeapBranchlessParallelO2,
//	new MergeHeapBranchlessParallelO3,
//	new MergeHeapBranchlessParallelOs,
//	new MergeHeapBranchlessParallelOz,
//
//	new MergeHeap4aryBranchlessParallelO1,
//	new MergeHeap4aryBranchlessParallelO2,
//	new MergeHeap4aryBranchlessParallelO3,
//	new MergeHeap4aryBranchlessParallelOs,
//	new MergeHeap4aryBranchlessParallelOz,
//
//	new MergeHeap8aryParallelSimdO1,
//	new MergeHeap8aryParallelSimdO2,
//	new MergeHeap8aryParallelSimdO3,
//	new MergeHeap8aryParallelSimdOs,
//	new MergeHeap8aryParallelSimdOz,
//
//	new MergeTournamentCacheBranchlessO1,
//	new MergeTournamentCacheBranchlessO2,
//	new MergeTournamentCacheBranchlessO3,
//	new MergeTournamentCacheBranchlessOs,
//	new MergeTournamentCacheBranchlessOz,
//
//	new MergeTournamentExternalCacheBranchlessO1,
//	new MergeTournamentExternalCacheBranchlessO2,
//	new MergeTournamentExternalCacheBranchlessO3,
//	new MergeTournamentExternalCacheBranchlessOs,
//	new MergeTournamentExternalCacheBranchlessOz,
//
//	new MergeTournament4aryO1,
//	new MergeTournament4aryO2,
//	new MergeTournament4aryO3,
//	new MergeTournament4aryOs,
//	new MergeTournament4aryOz,
//
//	new MergeLoser8aryO1,
//	new MergeLoser8aryO2,
//	new MergeLoser8aryO3,
//	new MergeLoser8aryOs,
//	new MergeLoser8aryOz,
//
//	new MergeStateMachineCompiledVarO1,
//	new MergeStateMachineCompiledVarO2,
//	new MergeStateMachineCompiledVarO3,
//	new MergeStateMachineCompiledVarOs,
//	new MergeStateMachineCompiledVarOz,
};

const size_t num_tests = sizeof(functions) / sizeof(Merge *);

int order[num_tests];

long timings[ARRAY_COUNT+1][num_tests][3];
long inits[ITER_COUNT];
long iterations[ITER_COUNT];

unsigned int seed;

void print_info(std::ostream &out) {
	out << "COMPILER_VERSION " << __VERSION__ << std::endl;
	out << "ARRAY_LENGTH " << ARRAY_LENGTH << std::endl;
	out << "ARRAY_COUNT " << ARRAY_COUNT << std::endl;
	out << "ITER_COUNT " << ITER_COUNT << std::endl;
	out << "NUM_TESTS " << num_tests << std::endl;
#ifdef ORDERED_TESTS
	out << "TEST_TYPE ordered" << std::endl;
#else
	out << "TEST_TYPE random" << std::endl;
#endif
	out << "SEED " << seed << std::endl;
	out << "MEMORY " << (double)ARRAY_LENGTH * ARRAY_COUNT * 2 * 32 / 8 / 1024 / 1024 / 1024 << " GiB" << std::endl;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: main [outfile]" << std::endl;
		return 1;
	}

	std::string outfile(argv[1]);
	std::ofstream outtxt(outfile + ".txt");
	std::ofstream outdat(outfile + ".dat");
	std::ofstream outdat3(outfile + ".dat3");

	for (size_t i = 0; i < num_tests; i++)
		order[i] = i;

	seed = (SEED == 0) ? time(NULL) : SEED;
	srand(seed);

	print_info(std::cout);
	print_info(outtxt);

	std::mt19937 mt(seed);

	auto time_begin = std::chrono::steady_clock::now();

	struct test *t = harness_new(ARRAY_LENGTH, ARRAY_COUNT);

#ifdef ORDERED_TESTS
	harness_generate_ordered(t);
#else
	harness_generate(t);
#endif

	auto time_end = std::chrono::steady_clock::now();

	std::cout << std::endl;
	std::cout << "Init: " << std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count() << std::endl << std::endl;

	outtxt << std::endl;
	outtxt << "Init: " << std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count() << std::endl;

	for (int n = 3; n <= ARRAY_COUNT; n++) {
		std::shuffle(std::begin(order), std::end(order), mt);

		std::cout << "Merging " << n << " lists" << std::endl;
		outtxt << std::endl << "## MERGING " << n << " LISTS ##" << std::endl;

		time_begin = std::chrono::steady_clock::now();
		merge_baseline_copy_sort(t, n);
		time_end = std::chrono::steady_clock::now();
		outtxt << "Baseline (copy+sort) " << std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_begin).count() << std::endl;
		outtxt << "Name                                     | Success | Init   | Min, Med, Max     | Standard Deviation | Error Msg" << std::endl;
		outtxt << "----------------------------------------------------------------------------------------------------------------" << std::endl;

		for (size_t i = 0; i < num_tests; i++) {
			harness_reset(t);

//			// TODO this needs to go earlier and we need to run algorithms consecutively
//			// Also try a larger number and maybe a sleep?
//			for (volatile int i = 0; i < 1'000'000; i++)
//				asm volatile("");

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
			outtxt << std::format("{:<40} | {:<7} | {:>6} | {:>17} | {:>18} |{}", functions[alg]->name.c_str(), status[0] == '\0' ? "true" : "false", init_buffer, time_buffer, sd_buffer, status_buffer) << std::endl;
		}
	}

	outdat << 'n';
	for (size_t i = 0; i < num_tests; i++)
		outdat << ',' << functions[i]->name.c_str();
	outdat << std::endl;


	for (int n = 3; n <= ARRAY_COUNT; n++) {
		outdat << n;
		for (size_t i = 0; i < num_tests; i++)
			outdat << ',' << timings[n][i][1];
		outdat << std::endl;
	}

	outdat3 << 'n';
	for (size_t i = 0; i < num_tests; i++)
		outdat3 << ',' << functions[i]->name << "(min)," << functions[i]->name << "(med)," << functions[i]->name << "(max)";
	outdat3 << std::endl;


	for (int n = 3; n <= ARRAY_COUNT; n++) {
		outdat3 << n;
		for (size_t i = 0; i < num_tests; i++) {
			outdat3 << ',' << timings[n][i][0] << ',' << timings[n][i][1] << ',' << timings[n][i][2];
		}
		outdat3 << std::endl;
	}

	return 0;
}
