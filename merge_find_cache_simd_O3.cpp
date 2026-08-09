#include "harness.h"

#include "merge_find_cache_simd.h"

#include <cstdint>
#include <cassert>
#include <cmath>
#include <cstring>

#include <algorithm>
#include <immintrin.h>

__attribute__((optimize("no-thread-jumps")))
bool MergeFindCacheSimdO3::merge(struct test *t, int n) {
	size_t rounded = (size_t)ceil((double)n / 8) * 8;

	int **segments = (int **)malloc(sizeof(int *) * rounded);
	int *cache = (int *)malloc(sizeof(int) * rounded);
	memset(cache, 0, sizeof(int) * rounded);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}

	// process
	size_t pos = 0;
	for (;;) {
		// http://0x80.pl/notesen/2018-10-03-simd-index-of-min.html
		// https://github.com/WojciechMula/toys/tree/master/simd-min-index
		const __m256i increment = _mm256_set1_epi32(8);
		__m256i indices = _mm256_setr_epi32(0, 1, 2, 3, 4, 5, 6, 7);
		__m256i maxindices = indices;
		__m256i maxvalues = _mm256_loadu_si256((__m256i*)cache);

		for (size_t i = 8; i < rounded; i += 8) {
			indices = _mm256_add_epi32(indices, increment);

			const __m256i values = _mm256_loadu_si256((__m256i*)(cache + i));
			const __m256i gt = _mm256_cmpgt_epi32(values, maxvalues);
			maxindices = _mm256_blendv_epi8(maxindices, indices, gt);
			maxvalues = _mm256_max_epi32(values, maxvalues);
		}

		// fold one last time
		__m128i maxindices1 = _mm256_extracti128_si256(maxindices, 0);
		__m128i maxindices2 = _mm256_extracti128_si256(maxindices, 1);
		__m128i maxvalues1 = _mm256_extracti128_si256(maxvalues, 0);
		__m128i maxvalues2 = _mm256_extracti128_si256(maxvalues, 1);

		const __m128i gt = _mm_cmpgt_epi32(maxvalues2, maxvalues1);
		maxindices1 = _mm_blendv_epi8(maxindices1, maxindices2, gt);
		maxvalues1 = _mm_max_epi32(maxvalues2, maxvalues1);

		// extract and find max
		int32_t values_array[4];
		uint32_t indices_array[4];

		_mm_storeu_si128((__m128i*)values_array, maxvalues1);
		_mm_storeu_si128((__m128i*)indices_array, maxindices1);

		int best = values_array[0];
		int best_i = 0;

		for (int i = 1; i < 4; i++) {
			int cmp = values_array[i];
			best = (best > cmp ? best : cmp);
			best_i = (best > cmp ? best_i : i);
		}

		if (best == 0) break;

		t->results[pos++] = best;
		size_t maxindex = indices_array[best_i];
		cache[maxindex] = *++segments[maxindex];
	}

	free(cache);
	free(segments);

	return true;
}
