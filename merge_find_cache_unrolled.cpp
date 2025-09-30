#include "harness.h"

#include "merge_find_cache_unrolled.h"

static void merge_3(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		}
	}
}

static void merge_4(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		}
	}
}

static void merge_5(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		}
	}
}

static void merge_6(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		}
	}
}

static void merge_7(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		}
	}
}

static void merge_8(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		}
	}
}

static void merge_9(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		}
	}
}

static void merge_10(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		}
	}
}

static void merge_11(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		}
	}
}

static void merge_12(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		}
	}
}

static void merge_13(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		}
	}
}

static void merge_14(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		}
	}
}

static void merge_15(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		}
	}
}

static void merge_16(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		}
	}
}

static void merge_17(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		}
	}
}

static void merge_18(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		}
	}
}

static void merge_19(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		}
	}
}

static void merge_20(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		}
	}
}

bool MergeFindCacheUnrolled::merge(struct test *t, int n) {
	if (n > 20)
		return false;

	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}

	// process
	switch (n) {
	case 3:
		merge_3(t, segments, cache);
		break;
	case 4:
		merge_4(t, segments, cache);
		break;
	case 5:
		merge_5(t, segments, cache);
		break;
	case 6:
		merge_6(t, segments, cache);
		break;
	case 7:
		merge_7(t, segments, cache);
		break;
	case 8:
		merge_8(t, segments, cache);
		break;
	case 9:
		merge_9(t, segments, cache);
		break;
	case 10:
		merge_10(t, segments, cache);
		break;
	case 11:
		merge_11(t, segments, cache);
		break;
	case 12:
		merge_12(t, segments, cache);
		break;
	case 13:
		merge_13(t, segments, cache);
		break;
	case 14:
		merge_14(t, segments, cache);
		break;
	case 15:
		merge_15(t, segments, cache);
		break;
	case 16:
		merge_16(t, segments, cache);
		break;
	case 17:
		merge_17(t, segments, cache);
		break;
	case 18:
		merge_18(t, segments, cache);
		break;
	case 19:
		merge_19(t, segments, cache);
		break;
	case 20:
		merge_20(t, segments, cache);
		break;
	}

	free(cache);
	free(segments);

	return true;
}
