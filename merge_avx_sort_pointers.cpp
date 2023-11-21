#include <immintrin.h>

#include "harness.h"

static int *postings[8];

static __m512i masks[16] = {
	_mm512_set_epi64(7, 6, 5, 4, 3, 2, 1, 0),
	_mm512_set_epi64(7, 6, 5, 4, 3, 2, 0, 1),
	_mm512_set_epi64(7, 6, 5, 4, 3, 0, 2, 1),
	_mm512_set_epi64(7, 6, 5, 4, 0, 3, 2, 1),
	_mm512_set_epi64(7, 6, 5, 0, 4, 3, 2, 1),
	_mm512_set_epi64(7, 6, 0, 5, 4, 3, 2, 1),
	_mm512_set_epi64(7, 0, 6, 5, 4, 3, 2, 1),
	_mm512_set_epi64(0, 7, 6, 5, 4, 3, 2, 1),
};

static void sort_full(int **a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		int *x = a[i];
		for (j = i - 1; j >= 0 && *a[j] < *x; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

static void sort_partial(int length) {
#ifdef __AVX512F__
	int i;
	int *x = postings[0];
	for (i = 0; i < length-1 && *x < *postings[i+1]; i++)
		;

        __m512i reg = _mm512_loadu_epi64(postings);
	reg = _mm512_permutexvar_epi64(masks[i], reg);
        _mm512_storeu_epi64(postings, reg);
#endif
}

bool merge_avx_sort_pointers(struct test *t, int n) {
#ifndef __AVX512F__
	return false;
#endif

	if (n > 8)
		return false;

	for (int i = 0; i < n; i++)
		postings[i] = t->postings[i];

	sort_full(postings, n);

	// process
	size_t pos = 0;
	for (;;) {
		if (*postings[0] == 0)
			break;

		t->results[pos++] = *postings[0]++;

		sort_partial(n);
	}

	return true;
}
