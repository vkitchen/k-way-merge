#include <immintrin.h>

#include "harness.h"

static int *postings[16];
static unsigned char segments[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

static __m128i masks[16] = {
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 0, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 0, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 0, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 0, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 0, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 0, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 0, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 0, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 0, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(0, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
};

static void sort_full(int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		unsigned char x = segments[i];
		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
			segments[j+1] = segments[j];
		segments[j+1] = x;
	}
}

static void sort_partial_3() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 2 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_4() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 3 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_5() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 4 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_6() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 5 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_7() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 6 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_8() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 7 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_9() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 8 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_10() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 9 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_11() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 10 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_12() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 11 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_13() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 12 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_14() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 13 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_15() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 14 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

static void sort_partial_16() {
#ifdef __AVX512F__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 15 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

bool merge_avx_sort_discrete_n(struct test *t, int n) {
#ifndef __AVX512F__
	return false;
#endif

	for (int i = 0; i < n; i++)
		postings[i] = t->postings[i];

	sort_full(n);

	// process
	size_t pos = 0;

	if (n == 3) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_3();
		}
	} else if (n == 4) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_4();
		}
	} else if (n == 5) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_5();
		}
	} else if (n == 6) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_6();
		}
	} else if (n == 7) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_7();
		}
	} else if (n == 8) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_8();
		}
	} else if (n == 9) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_9();
		}
	} else if (n == 10) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_10();
		}
	} else if (n == 11) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_11();
		}
	} else if (n == 12) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_12();
		}
	} else if (n == 13) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_13();
		}
	} else if (n == 14) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_14();
		}
	} else if (n == 15) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_15();
		}
	} else if (n == 16) {
		for (;;) {
			if (*postings[segments[0]] == 0)
				break;

			t->results[pos++] = *postings[segments[0]]++;

			sort_partial_16();
		}
	}

	return true;
}
