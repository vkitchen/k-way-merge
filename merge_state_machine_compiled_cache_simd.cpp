#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <immintrin.h>

#include <algorithm>

#include "config.h"
#include "harness.h"

#include "merge_state_machine_compiled_cache_simd.h"

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

bool MergeStateMachineCompiledCacheSimd::merge(struct test *t, int n) {
	int *segments[8];
	int cache[8];

	__m256i vals, cmp, max;
	int mask, pop;

	for (int i = 0; i < n && i < 8; i++)
		segments[i] = t->postings[i];

	qsort(segments, std::min(n, 8), sizeof(int *), cmp_p);

	// So that we don't accidentally consider ourselves greater than an empty cell
	for (int i = 0; i < 8; i++)
		cache[i] = INT_MAX;

	for (int i = 0; i < n && i < 8; i++)
		cache[i] = *segments[i];

	// process
	size_t pos = 0;
	if (n != 4)
		return false;

// n == 3
/*
int state = 0;

int lookups[] = { 0, 0, 1, 2, 1, 2 };

int transitions[][3] = {
	{ 4, 2, 0 },
	{ 5, 3, 1 },
	{ 1, 0, 2 },
	{ 0, 1, 3 },
	{ 3, 5, 4 },
	{ 2, 4, 5 }
};

for (;;) {
	int index = lookups[state];
	if (cache[index] == 0)
		break;
	t->results[pos++] = cache[index];
	cache[index] = *++segments[index];
	vals = _mm256_loadu_si256((__m256i *)cache);
	cmp = _mm256_set1_epi32(cache[index]);
	max = _mm256_cmpgt_epi32(cmp, vals);
	mask = _mm256_movemask_ps((__m256)max);
	pop = __builtin_popcount(mask);
	state = transitions[state][pop];
}
*/
// n == 4
int state = 0;

int lookups[] = { 0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3 };

int transitions[][4] = {
	{ 18, 12, 6, 0 },
	{ 19, 13, 7, 1 },
	{ 20, 14, 8, 2 },
	{ 21, 15, 9, 3 },
	{ 22, 16, 10, 4 },
	{ 23, 17, 11, 5 },
	{ 4, 2, 0, 6 },
	{ 5, 3, 1, 7 },
	{ 1, 0, 2, 8 },
	{ 0, 1, 3, 9 },
	{ 3, 5, 4, 10 },
	{ 2, 4, 5, 11 },
	{ 10, 8, 14, 12 },
	{ 11, 9, 15, 13 },
	{ 7, 6, 12, 14 },
	{ 6, 7, 13, 15 },
	{ 9, 11, 17, 16 },
	{ 8, 10, 16, 17 },
	{ 16, 22, 20, 18 },
	{ 17, 23, 21, 19 },
	{ 13, 19, 18, 20 },
	{ 12, 18, 19, 21 },
	{ 15, 21, 23, 22 },
	{ 14, 20, 22, 23 }
};

for (;;) {
	int index = lookups[state];
	if (cache[index] == 0)
		break;
	t->results[pos++] = cache[index];
	cache[index] = *++segments[index];
	vals = _mm256_loadu_si256((__m256i *)cache);
	cmp = _mm256_set1_epi32(cache[index]);
	max = _mm256_cmpgt_epi32(cmp, vals);
	mask = _mm256_movemask_ps((__m256)max);
	pop = __builtin_popcount(mask);
	state = transitions[state][pop];
}

return true;

/*
	if (n == 3) {
#include "state_machine_cache_simd_3.cpp"
	} else if (n == 4) {
#include "state_machine_cache_simd_4.cpp"
	} else if (n == 5) {
#include "state_machine_cache_simd_5.cpp"
#ifdef STATE6
	} else if (n == 6) {
#include "state_machine_cache_simd_6.cpp"
#endif
#ifdef STATE7
	} else if (n == 7) {
#include "state_machine_cache_simd_7.cpp"
#endif
	} else {
		return false;
	}

DONE: ;

	return true;
*/
}
