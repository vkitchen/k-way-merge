#include "harness.h"

#include "merge_find_cache_simd.h"

#include <cstdint>
#include <cassert>
#include <cmath>
#include <cstring>

#include <algorithm>
#include <immintrin.h>

#include <iostream>

// http://0x80.pl/notesen/2018-10-03-simd-index-of-min.html
// https://github.com/WojciechMula/toys/tree/master/simd-min-index
static size_t max_index_avx2(int32_t* array, size_t size) {
	const __m256i increment = _mm256_set1_epi32(8);
	__m256i indices = _mm256_setr_epi32(0, 1, 2, 3, 4, 5, 6, 7);
	__m256i maxindices = indices;
	__m256i maxvalues = _mm256_loadu_si256((__m256i*)array);

	for (size_t i = 8; i < size; i += 8) {
		indices = _mm256_add_epi32(indices, increment);

		const __m256i values = _mm256_loadu_si256((__m256i*)(array + i));
		const __m256i gt = _mm256_cmpgt_epi32(values, maxvalues);
		maxindices = _mm256_blendv_epi8(maxindices, indices, gt);
		maxvalues = _mm256_max_epi32(values, maxvalues);
	}

	// find max index in vector result (in an extremely naive way)
	int32_t values_array[8];
	uint32_t indices_array[8];

	_mm256_storeu_si256((__m256i*)values_array, maxvalues);
	_mm256_storeu_si256((__m256i*)indices_array, maxindices);

	size_t  maxindex = indices_array[0];
	int32_t maxvalue = values_array[0];
	for (int i = 1; i < 8; i++) {
		if (values_array[i] > maxvalue) {
			maxvalue = values_array[i];
			maxindex = indices_array[i];
		} else if (values_array[i] == maxvalue) {
			maxindex = std::max(maxindex, size_t(indices_array[i]));
		}
	}

	return maxindex;
}

bool MergeFindCacheSimdO3::merge(struct test *t, int n) {
	int rounded = (int)ceil((double)n / 8) * 8;

	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * rounded);
	memset(cache, 0, sizeof(int) * rounded);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = t->postings[i][0];
	}

	// process
	size_t pos = 0;
	for (;;) {
		int best = 0;

		best = max_index_avx2(cache, rounded);

		if (cache[best] == 0)
			break;

		t->results[pos++] = *segments[best]++;
		cache[best] = segments[best][0];
	}

	free(cache);
	free(segments);

	return true;
}
