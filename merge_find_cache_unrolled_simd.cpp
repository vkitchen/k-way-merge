#include "harness.h"

#include "merge_find_cache_unrolled_simd.h"

#include <immintrin.h>

static void merge_8(struct test *t, int **segments, int *cache) {
	__m256i vals, needle, cmp;

	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0)
			break;

		vals = _mm256_loadu_si256((__m256i*)cache);

		needle = _mm256_set1_epi32(cache[0]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
			continue;
		}

		needle = _mm256_set1_epi32(cache[1]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
			continue;
		}

		needle = _mm256_set1_epi32(cache[2]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
			continue;
		}

		needle = _mm256_set1_epi32(cache[3]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
			continue;
		}

		needle = _mm256_set1_epi32(cache[4]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
			continue;
		}

		needle = _mm256_set1_epi32(cache[5]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
			continue;
		}

		needle = _mm256_set1_epi32(cache[6]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
			continue;
		}

		needle = _mm256_set1_epi32(cache[7]);
		cmp = _mm256_cmpgt_epi32(vals, needle);
		if (!_mm256_movemask_ps((__m256)cmp)) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
			continue;
		}
	}
}

static void merge_16(struct test *t, int **segments, int *cache) {
	__m256i needle, vals1, vals2, cmp1, cmp2;

	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0)
			break;

		vals1 = _mm256_loadu_si256((__m256i*)cache);
		vals2 = _mm256_loadu_si256((__m256i*)(cache + 8));

		needle = _mm256_set1_epi32(cache[0]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
			continue;
		}

		needle = _mm256_set1_epi32(cache[1]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
			continue;
		}

		needle = _mm256_set1_epi32(cache[2]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
			continue;
		}

		needle = _mm256_set1_epi32(cache[3]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
			continue;
		}

		needle = _mm256_set1_epi32(cache[4]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
			continue;
		}

		needle = _mm256_set1_epi32(cache[5]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
			continue;
		}

		needle = _mm256_set1_epi32(cache[6]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
			continue;
		}

		needle = _mm256_set1_epi32(cache[7]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
			continue;
		}

		needle = _mm256_set1_epi32(cache[8]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
			continue;
		}

		needle = _mm256_set1_epi32(cache[9]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
			continue;
		}

		needle = _mm256_set1_epi32(cache[10]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
			continue;
		}

		needle = _mm256_set1_epi32(cache[11]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
			continue;
		}

		needle = _mm256_set1_epi32(cache[12]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
			continue;
		}

		needle = _mm256_set1_epi32(cache[13]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
			continue;
		}

		needle = _mm256_set1_epi32(cache[14]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
			continue;
		}

		needle = _mm256_set1_epi32(cache[15]);
		cmp1 = _mm256_cmpgt_epi32(vals1, needle);
		cmp2 = _mm256_cmpgt_epi32(vals2, needle);
		if (!_mm256_movemask_ps((__m256)cmp1) && !_mm256_movemask_ps((__m256)cmp2)) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
			continue;
		}
	}
}

bool MergeFindCacheUnrolledSimd::merge(struct test *t, int n) {
	if (n != 8 && n != 16)
		return false;

	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}

	// process
	switch (n) {
	case 8:
		merge_8(t, segments, cache);
		break;
	case 16:
		merge_16(t, segments, cache);
		break;
	}

	free(cache);
	free(segments);

	return true;
}
