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
static void merge_21(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		}
	}
}
static void merge_22(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		}
	}
}
static void merge_23(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		}
	}
}
static void merge_24(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		}
	}
}
static void merge_25(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0 && cache[24] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23] && cache[0] >= cache[24]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23] && cache[1] >= cache[24]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23] && cache[2] >= cache[24]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23] && cache[3] >= cache[24]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23] && cache[4] >= cache[24]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23] && cache[5] >= cache[24]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23] && cache[6] >= cache[24]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23] && cache[7] >= cache[24]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23] && cache[8] >= cache[24]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23] && cache[9] >= cache[24]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23] && cache[10] >= cache[24]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23] && cache[11] >= cache[24]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23] && cache[12] >= cache[24]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23] && cache[13] >= cache[24]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23] && cache[14] >= cache[24]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23] && cache[15] >= cache[24]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23] && cache[16] >= cache[24]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23] && cache[17] >= cache[24]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23] && cache[18] >= cache[24]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23] && cache[19] >= cache[24]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23] && cache[20] >= cache[24]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23] && cache[21] >= cache[24]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23] && cache[22] >= cache[24]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else if (cache[23] >= cache[0] && cache[23] >= cache[1] && cache[23] >= cache[2] && cache[23] >= cache[3] && cache[23] >= cache[4] && cache[23] >= cache[5] && cache[23] >= cache[6] && cache[23] >= cache[7] && cache[23] >= cache[8] && cache[23] >= cache[9] && cache[23] >= cache[10] && cache[23] >= cache[11] && cache[23] >= cache[12] && cache[23] >= cache[13] && cache[23] >= cache[14] && cache[23] >= cache[15] && cache[23] >= cache[16] && cache[23] >= cache[17] && cache[23] >= cache[18] && cache[23] >= cache[19] && cache[23] >= cache[20] && cache[23] >= cache[21] && cache[23] >= cache[22] && cache[23] >= cache[24]) {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		} else {
			t->results[pos++] = cache[24];
			cache[24] = *++segments[24];
		}
	}
}
static void merge_26(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0 && cache[24] == 0 && cache[25] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23] && cache[0] >= cache[24] && cache[0] >= cache[25]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23] && cache[1] >= cache[24] && cache[1] >= cache[25]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23] && cache[2] >= cache[24] && cache[2] >= cache[25]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23] && cache[3] >= cache[24] && cache[3] >= cache[25]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23] && cache[4] >= cache[24] && cache[4] >= cache[25]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23] && cache[5] >= cache[24] && cache[5] >= cache[25]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23] && cache[6] >= cache[24] && cache[6] >= cache[25]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23] && cache[7] >= cache[24] && cache[7] >= cache[25]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23] && cache[8] >= cache[24] && cache[8] >= cache[25]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23] && cache[9] >= cache[24] && cache[9] >= cache[25]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23] && cache[10] >= cache[24] && cache[10] >= cache[25]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23] && cache[11] >= cache[24] && cache[11] >= cache[25]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23] && cache[12] >= cache[24] && cache[12] >= cache[25]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23] && cache[13] >= cache[24] && cache[13] >= cache[25]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23] && cache[14] >= cache[24] && cache[14] >= cache[25]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23] && cache[15] >= cache[24] && cache[15] >= cache[25]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23] && cache[16] >= cache[24] && cache[16] >= cache[25]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23] && cache[17] >= cache[24] && cache[17] >= cache[25]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23] && cache[18] >= cache[24] && cache[18] >= cache[25]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23] && cache[19] >= cache[24] && cache[19] >= cache[25]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23] && cache[20] >= cache[24] && cache[20] >= cache[25]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23] && cache[21] >= cache[24] && cache[21] >= cache[25]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23] && cache[22] >= cache[24] && cache[22] >= cache[25]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else if (cache[23] >= cache[0] && cache[23] >= cache[1] && cache[23] >= cache[2] && cache[23] >= cache[3] && cache[23] >= cache[4] && cache[23] >= cache[5] && cache[23] >= cache[6] && cache[23] >= cache[7] && cache[23] >= cache[8] && cache[23] >= cache[9] && cache[23] >= cache[10] && cache[23] >= cache[11] && cache[23] >= cache[12] && cache[23] >= cache[13] && cache[23] >= cache[14] && cache[23] >= cache[15] && cache[23] >= cache[16] && cache[23] >= cache[17] && cache[23] >= cache[18] && cache[23] >= cache[19] && cache[23] >= cache[20] && cache[23] >= cache[21] && cache[23] >= cache[22] && cache[23] >= cache[24] && cache[23] >= cache[25]) {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		} else if (cache[24] >= cache[0] && cache[24] >= cache[1] && cache[24] >= cache[2] && cache[24] >= cache[3] && cache[24] >= cache[4] && cache[24] >= cache[5] && cache[24] >= cache[6] && cache[24] >= cache[7] && cache[24] >= cache[8] && cache[24] >= cache[9] && cache[24] >= cache[10] && cache[24] >= cache[11] && cache[24] >= cache[12] && cache[24] >= cache[13] && cache[24] >= cache[14] && cache[24] >= cache[15] && cache[24] >= cache[16] && cache[24] >= cache[17] && cache[24] >= cache[18] && cache[24] >= cache[19] && cache[24] >= cache[20] && cache[24] >= cache[21] && cache[24] >= cache[22] && cache[24] >= cache[23] && cache[24] >= cache[25]) {
			t->results[pos++] = cache[24];
			cache[24] = *++segments[24];
		} else {
			t->results[pos++] = cache[25];
			cache[25] = *++segments[25];
		}
	}
}
static void merge_27(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0 && cache[24] == 0 && cache[25] == 0 && cache[26] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23] && cache[0] >= cache[24] && cache[0] >= cache[25] && cache[0] >= cache[26]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23] && cache[1] >= cache[24] && cache[1] >= cache[25] && cache[1] >= cache[26]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23] && cache[2] >= cache[24] && cache[2] >= cache[25] && cache[2] >= cache[26]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23] && cache[3] >= cache[24] && cache[3] >= cache[25] && cache[3] >= cache[26]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23] && cache[4] >= cache[24] && cache[4] >= cache[25] && cache[4] >= cache[26]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23] && cache[5] >= cache[24] && cache[5] >= cache[25] && cache[5] >= cache[26]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23] && cache[6] >= cache[24] && cache[6] >= cache[25] && cache[6] >= cache[26]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23] && cache[7] >= cache[24] && cache[7] >= cache[25] && cache[7] >= cache[26]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23] && cache[8] >= cache[24] && cache[8] >= cache[25] && cache[8] >= cache[26]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23] && cache[9] >= cache[24] && cache[9] >= cache[25] && cache[9] >= cache[26]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23] && cache[10] >= cache[24] && cache[10] >= cache[25] && cache[10] >= cache[26]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23] && cache[11] >= cache[24] && cache[11] >= cache[25] && cache[11] >= cache[26]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23] && cache[12] >= cache[24] && cache[12] >= cache[25] && cache[12] >= cache[26]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23] && cache[13] >= cache[24] && cache[13] >= cache[25] && cache[13] >= cache[26]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23] && cache[14] >= cache[24] && cache[14] >= cache[25] && cache[14] >= cache[26]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23] && cache[15] >= cache[24] && cache[15] >= cache[25] && cache[15] >= cache[26]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23] && cache[16] >= cache[24] && cache[16] >= cache[25] && cache[16] >= cache[26]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23] && cache[17] >= cache[24] && cache[17] >= cache[25] && cache[17] >= cache[26]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23] && cache[18] >= cache[24] && cache[18] >= cache[25] && cache[18] >= cache[26]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23] && cache[19] >= cache[24] && cache[19] >= cache[25] && cache[19] >= cache[26]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23] && cache[20] >= cache[24] && cache[20] >= cache[25] && cache[20] >= cache[26]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23] && cache[21] >= cache[24] && cache[21] >= cache[25] && cache[21] >= cache[26]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23] && cache[22] >= cache[24] && cache[22] >= cache[25] && cache[22] >= cache[26]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else if (cache[23] >= cache[0] && cache[23] >= cache[1] && cache[23] >= cache[2] && cache[23] >= cache[3] && cache[23] >= cache[4] && cache[23] >= cache[5] && cache[23] >= cache[6] && cache[23] >= cache[7] && cache[23] >= cache[8] && cache[23] >= cache[9] && cache[23] >= cache[10] && cache[23] >= cache[11] && cache[23] >= cache[12] && cache[23] >= cache[13] && cache[23] >= cache[14] && cache[23] >= cache[15] && cache[23] >= cache[16] && cache[23] >= cache[17] && cache[23] >= cache[18] && cache[23] >= cache[19] && cache[23] >= cache[20] && cache[23] >= cache[21] && cache[23] >= cache[22] && cache[23] >= cache[24] && cache[23] >= cache[25] && cache[23] >= cache[26]) {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		} else if (cache[24] >= cache[0] && cache[24] >= cache[1] && cache[24] >= cache[2] && cache[24] >= cache[3] && cache[24] >= cache[4] && cache[24] >= cache[5] && cache[24] >= cache[6] && cache[24] >= cache[7] && cache[24] >= cache[8] && cache[24] >= cache[9] && cache[24] >= cache[10] && cache[24] >= cache[11] && cache[24] >= cache[12] && cache[24] >= cache[13] && cache[24] >= cache[14] && cache[24] >= cache[15] && cache[24] >= cache[16] && cache[24] >= cache[17] && cache[24] >= cache[18] && cache[24] >= cache[19] && cache[24] >= cache[20] && cache[24] >= cache[21] && cache[24] >= cache[22] && cache[24] >= cache[23] && cache[24] >= cache[25] && cache[24] >= cache[26]) {
			t->results[pos++] = cache[24];
			cache[24] = *++segments[24];
		} else if (cache[25] >= cache[0] && cache[25] >= cache[1] && cache[25] >= cache[2] && cache[25] >= cache[3] && cache[25] >= cache[4] && cache[25] >= cache[5] && cache[25] >= cache[6] && cache[25] >= cache[7] && cache[25] >= cache[8] && cache[25] >= cache[9] && cache[25] >= cache[10] && cache[25] >= cache[11] && cache[25] >= cache[12] && cache[25] >= cache[13] && cache[25] >= cache[14] && cache[25] >= cache[15] && cache[25] >= cache[16] && cache[25] >= cache[17] && cache[25] >= cache[18] && cache[25] >= cache[19] && cache[25] >= cache[20] && cache[25] >= cache[21] && cache[25] >= cache[22] && cache[25] >= cache[23] && cache[25] >= cache[24] && cache[25] >= cache[26]) {
			t->results[pos++] = cache[25];
			cache[25] = *++segments[25];
		} else {
			t->results[pos++] = cache[26];
			cache[26] = *++segments[26];
		}
	}
}
static void merge_28(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0 && cache[24] == 0 && cache[25] == 0 && cache[26] == 0 && cache[27] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23] && cache[0] >= cache[24] && cache[0] >= cache[25] && cache[0] >= cache[26] && cache[0] >= cache[27]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23] && cache[1] >= cache[24] && cache[1] >= cache[25] && cache[1] >= cache[26] && cache[1] >= cache[27]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23] && cache[2] >= cache[24] && cache[2] >= cache[25] && cache[2] >= cache[26] && cache[2] >= cache[27]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23] && cache[3] >= cache[24] && cache[3] >= cache[25] && cache[3] >= cache[26] && cache[3] >= cache[27]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23] && cache[4] >= cache[24] && cache[4] >= cache[25] && cache[4] >= cache[26] && cache[4] >= cache[27]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23] && cache[5] >= cache[24] && cache[5] >= cache[25] && cache[5] >= cache[26] && cache[5] >= cache[27]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23] && cache[6] >= cache[24] && cache[6] >= cache[25] && cache[6] >= cache[26] && cache[6] >= cache[27]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23] && cache[7] >= cache[24] && cache[7] >= cache[25] && cache[7] >= cache[26] && cache[7] >= cache[27]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23] && cache[8] >= cache[24] && cache[8] >= cache[25] && cache[8] >= cache[26] && cache[8] >= cache[27]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23] && cache[9] >= cache[24] && cache[9] >= cache[25] && cache[9] >= cache[26] && cache[9] >= cache[27]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23] && cache[10] >= cache[24] && cache[10] >= cache[25] && cache[10] >= cache[26] && cache[10] >= cache[27]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23] && cache[11] >= cache[24] && cache[11] >= cache[25] && cache[11] >= cache[26] && cache[11] >= cache[27]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23] && cache[12] >= cache[24] && cache[12] >= cache[25] && cache[12] >= cache[26] && cache[12] >= cache[27]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23] && cache[13] >= cache[24] && cache[13] >= cache[25] && cache[13] >= cache[26] && cache[13] >= cache[27]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23] && cache[14] >= cache[24] && cache[14] >= cache[25] && cache[14] >= cache[26] && cache[14] >= cache[27]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23] && cache[15] >= cache[24] && cache[15] >= cache[25] && cache[15] >= cache[26] && cache[15] >= cache[27]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23] && cache[16] >= cache[24] && cache[16] >= cache[25] && cache[16] >= cache[26] && cache[16] >= cache[27]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23] && cache[17] >= cache[24] && cache[17] >= cache[25] && cache[17] >= cache[26] && cache[17] >= cache[27]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23] && cache[18] >= cache[24] && cache[18] >= cache[25] && cache[18] >= cache[26] && cache[18] >= cache[27]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23] && cache[19] >= cache[24] && cache[19] >= cache[25] && cache[19] >= cache[26] && cache[19] >= cache[27]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23] && cache[20] >= cache[24] && cache[20] >= cache[25] && cache[20] >= cache[26] && cache[20] >= cache[27]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23] && cache[21] >= cache[24] && cache[21] >= cache[25] && cache[21] >= cache[26] && cache[21] >= cache[27]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23] && cache[22] >= cache[24] && cache[22] >= cache[25] && cache[22] >= cache[26] && cache[22] >= cache[27]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else if (cache[23] >= cache[0] && cache[23] >= cache[1] && cache[23] >= cache[2] && cache[23] >= cache[3] && cache[23] >= cache[4] && cache[23] >= cache[5] && cache[23] >= cache[6] && cache[23] >= cache[7] && cache[23] >= cache[8] && cache[23] >= cache[9] && cache[23] >= cache[10] && cache[23] >= cache[11] && cache[23] >= cache[12] && cache[23] >= cache[13] && cache[23] >= cache[14] && cache[23] >= cache[15] && cache[23] >= cache[16] && cache[23] >= cache[17] && cache[23] >= cache[18] && cache[23] >= cache[19] && cache[23] >= cache[20] && cache[23] >= cache[21] && cache[23] >= cache[22] && cache[23] >= cache[24] && cache[23] >= cache[25] && cache[23] >= cache[26] && cache[23] >= cache[27]) {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		} else if (cache[24] >= cache[0] && cache[24] >= cache[1] && cache[24] >= cache[2] && cache[24] >= cache[3] && cache[24] >= cache[4] && cache[24] >= cache[5] && cache[24] >= cache[6] && cache[24] >= cache[7] && cache[24] >= cache[8] && cache[24] >= cache[9] && cache[24] >= cache[10] && cache[24] >= cache[11] && cache[24] >= cache[12] && cache[24] >= cache[13] && cache[24] >= cache[14] && cache[24] >= cache[15] && cache[24] >= cache[16] && cache[24] >= cache[17] && cache[24] >= cache[18] && cache[24] >= cache[19] && cache[24] >= cache[20] && cache[24] >= cache[21] && cache[24] >= cache[22] && cache[24] >= cache[23] && cache[24] >= cache[25] && cache[24] >= cache[26] && cache[24] >= cache[27]) {
			t->results[pos++] = cache[24];
			cache[24] = *++segments[24];
		} else if (cache[25] >= cache[0] && cache[25] >= cache[1] && cache[25] >= cache[2] && cache[25] >= cache[3] && cache[25] >= cache[4] && cache[25] >= cache[5] && cache[25] >= cache[6] && cache[25] >= cache[7] && cache[25] >= cache[8] && cache[25] >= cache[9] && cache[25] >= cache[10] && cache[25] >= cache[11] && cache[25] >= cache[12] && cache[25] >= cache[13] && cache[25] >= cache[14] && cache[25] >= cache[15] && cache[25] >= cache[16] && cache[25] >= cache[17] && cache[25] >= cache[18] && cache[25] >= cache[19] && cache[25] >= cache[20] && cache[25] >= cache[21] && cache[25] >= cache[22] && cache[25] >= cache[23] && cache[25] >= cache[24] && cache[25] >= cache[26] && cache[25] >= cache[27]) {
			t->results[pos++] = cache[25];
			cache[25] = *++segments[25];
		} else if (cache[26] >= cache[0] && cache[26] >= cache[1] && cache[26] >= cache[2] && cache[26] >= cache[3] && cache[26] >= cache[4] && cache[26] >= cache[5] && cache[26] >= cache[6] && cache[26] >= cache[7] && cache[26] >= cache[8] && cache[26] >= cache[9] && cache[26] >= cache[10] && cache[26] >= cache[11] && cache[26] >= cache[12] && cache[26] >= cache[13] && cache[26] >= cache[14] && cache[26] >= cache[15] && cache[26] >= cache[16] && cache[26] >= cache[17] && cache[26] >= cache[18] && cache[26] >= cache[19] && cache[26] >= cache[20] && cache[26] >= cache[21] && cache[26] >= cache[22] && cache[26] >= cache[23] && cache[26] >= cache[24] && cache[26] >= cache[25] && cache[26] >= cache[27]) {
			t->results[pos++] = cache[26];
			cache[26] = *++segments[26];
		} else {
			t->results[pos++] = cache[27];
			cache[27] = *++segments[27];
		}
	}
}
static void merge_29(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0 && cache[24] == 0 && cache[25] == 0 && cache[26] == 0 && cache[27] == 0 && cache[28] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23] && cache[0] >= cache[24] && cache[0] >= cache[25] && cache[0] >= cache[26] && cache[0] >= cache[27] && cache[0] >= cache[28]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23] && cache[1] >= cache[24] && cache[1] >= cache[25] && cache[1] >= cache[26] && cache[1] >= cache[27] && cache[1] >= cache[28]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23] && cache[2] >= cache[24] && cache[2] >= cache[25] && cache[2] >= cache[26] && cache[2] >= cache[27] && cache[2] >= cache[28]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23] && cache[3] >= cache[24] && cache[3] >= cache[25] && cache[3] >= cache[26] && cache[3] >= cache[27] && cache[3] >= cache[28]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23] && cache[4] >= cache[24] && cache[4] >= cache[25] && cache[4] >= cache[26] && cache[4] >= cache[27] && cache[4] >= cache[28]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23] && cache[5] >= cache[24] && cache[5] >= cache[25] && cache[5] >= cache[26] && cache[5] >= cache[27] && cache[5] >= cache[28]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23] && cache[6] >= cache[24] && cache[6] >= cache[25] && cache[6] >= cache[26] && cache[6] >= cache[27] && cache[6] >= cache[28]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23] && cache[7] >= cache[24] && cache[7] >= cache[25] && cache[7] >= cache[26] && cache[7] >= cache[27] && cache[7] >= cache[28]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23] && cache[8] >= cache[24] && cache[8] >= cache[25] && cache[8] >= cache[26] && cache[8] >= cache[27] && cache[8] >= cache[28]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23] && cache[9] >= cache[24] && cache[9] >= cache[25] && cache[9] >= cache[26] && cache[9] >= cache[27] && cache[9] >= cache[28]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23] && cache[10] >= cache[24] && cache[10] >= cache[25] && cache[10] >= cache[26] && cache[10] >= cache[27] && cache[10] >= cache[28]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23] && cache[11] >= cache[24] && cache[11] >= cache[25] && cache[11] >= cache[26] && cache[11] >= cache[27] && cache[11] >= cache[28]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23] && cache[12] >= cache[24] && cache[12] >= cache[25] && cache[12] >= cache[26] && cache[12] >= cache[27] && cache[12] >= cache[28]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23] && cache[13] >= cache[24] && cache[13] >= cache[25] && cache[13] >= cache[26] && cache[13] >= cache[27] && cache[13] >= cache[28]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23] && cache[14] >= cache[24] && cache[14] >= cache[25] && cache[14] >= cache[26] && cache[14] >= cache[27] && cache[14] >= cache[28]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23] && cache[15] >= cache[24] && cache[15] >= cache[25] && cache[15] >= cache[26] && cache[15] >= cache[27] && cache[15] >= cache[28]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23] && cache[16] >= cache[24] && cache[16] >= cache[25] && cache[16] >= cache[26] && cache[16] >= cache[27] && cache[16] >= cache[28]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23] && cache[17] >= cache[24] && cache[17] >= cache[25] && cache[17] >= cache[26] && cache[17] >= cache[27] && cache[17] >= cache[28]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23] && cache[18] >= cache[24] && cache[18] >= cache[25] && cache[18] >= cache[26] && cache[18] >= cache[27] && cache[18] >= cache[28]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23] && cache[19] >= cache[24] && cache[19] >= cache[25] && cache[19] >= cache[26] && cache[19] >= cache[27] && cache[19] >= cache[28]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23] && cache[20] >= cache[24] && cache[20] >= cache[25] && cache[20] >= cache[26] && cache[20] >= cache[27] && cache[20] >= cache[28]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23] && cache[21] >= cache[24] && cache[21] >= cache[25] && cache[21] >= cache[26] && cache[21] >= cache[27] && cache[21] >= cache[28]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23] && cache[22] >= cache[24] && cache[22] >= cache[25] && cache[22] >= cache[26] && cache[22] >= cache[27] && cache[22] >= cache[28]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else if (cache[23] >= cache[0] && cache[23] >= cache[1] && cache[23] >= cache[2] && cache[23] >= cache[3] && cache[23] >= cache[4] && cache[23] >= cache[5] && cache[23] >= cache[6] && cache[23] >= cache[7] && cache[23] >= cache[8] && cache[23] >= cache[9] && cache[23] >= cache[10] && cache[23] >= cache[11] && cache[23] >= cache[12] && cache[23] >= cache[13] && cache[23] >= cache[14] && cache[23] >= cache[15] && cache[23] >= cache[16] && cache[23] >= cache[17] && cache[23] >= cache[18] && cache[23] >= cache[19] && cache[23] >= cache[20] && cache[23] >= cache[21] && cache[23] >= cache[22] && cache[23] >= cache[24] && cache[23] >= cache[25] && cache[23] >= cache[26] && cache[23] >= cache[27] && cache[23] >= cache[28]) {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		} else if (cache[24] >= cache[0] && cache[24] >= cache[1] && cache[24] >= cache[2] && cache[24] >= cache[3] && cache[24] >= cache[4] && cache[24] >= cache[5] && cache[24] >= cache[6] && cache[24] >= cache[7] && cache[24] >= cache[8] && cache[24] >= cache[9] && cache[24] >= cache[10] && cache[24] >= cache[11] && cache[24] >= cache[12] && cache[24] >= cache[13] && cache[24] >= cache[14] && cache[24] >= cache[15] && cache[24] >= cache[16] && cache[24] >= cache[17] && cache[24] >= cache[18] && cache[24] >= cache[19] && cache[24] >= cache[20] && cache[24] >= cache[21] && cache[24] >= cache[22] && cache[24] >= cache[23] && cache[24] >= cache[25] && cache[24] >= cache[26] && cache[24] >= cache[27] && cache[24] >= cache[28]) {
			t->results[pos++] = cache[24];
			cache[24] = *++segments[24];
		} else if (cache[25] >= cache[0] && cache[25] >= cache[1] && cache[25] >= cache[2] && cache[25] >= cache[3] && cache[25] >= cache[4] && cache[25] >= cache[5] && cache[25] >= cache[6] && cache[25] >= cache[7] && cache[25] >= cache[8] && cache[25] >= cache[9] && cache[25] >= cache[10] && cache[25] >= cache[11] && cache[25] >= cache[12] && cache[25] >= cache[13] && cache[25] >= cache[14] && cache[25] >= cache[15] && cache[25] >= cache[16] && cache[25] >= cache[17] && cache[25] >= cache[18] && cache[25] >= cache[19] && cache[25] >= cache[20] && cache[25] >= cache[21] && cache[25] >= cache[22] && cache[25] >= cache[23] && cache[25] >= cache[24] && cache[25] >= cache[26] && cache[25] >= cache[27] && cache[25] >= cache[28]) {
			t->results[pos++] = cache[25];
			cache[25] = *++segments[25];
		} else if (cache[26] >= cache[0] && cache[26] >= cache[1] && cache[26] >= cache[2] && cache[26] >= cache[3] && cache[26] >= cache[4] && cache[26] >= cache[5] && cache[26] >= cache[6] && cache[26] >= cache[7] && cache[26] >= cache[8] && cache[26] >= cache[9] && cache[26] >= cache[10] && cache[26] >= cache[11] && cache[26] >= cache[12] && cache[26] >= cache[13] && cache[26] >= cache[14] && cache[26] >= cache[15] && cache[26] >= cache[16] && cache[26] >= cache[17] && cache[26] >= cache[18] && cache[26] >= cache[19] && cache[26] >= cache[20] && cache[26] >= cache[21] && cache[26] >= cache[22] && cache[26] >= cache[23] && cache[26] >= cache[24] && cache[26] >= cache[25] && cache[26] >= cache[27] && cache[26] >= cache[28]) {
			t->results[pos++] = cache[26];
			cache[26] = *++segments[26];
		} else if (cache[27] >= cache[0] && cache[27] >= cache[1] && cache[27] >= cache[2] && cache[27] >= cache[3] && cache[27] >= cache[4] && cache[27] >= cache[5] && cache[27] >= cache[6] && cache[27] >= cache[7] && cache[27] >= cache[8] && cache[27] >= cache[9] && cache[27] >= cache[10] && cache[27] >= cache[11] && cache[27] >= cache[12] && cache[27] >= cache[13] && cache[27] >= cache[14] && cache[27] >= cache[15] && cache[27] >= cache[16] && cache[27] >= cache[17] && cache[27] >= cache[18] && cache[27] >= cache[19] && cache[27] >= cache[20] && cache[27] >= cache[21] && cache[27] >= cache[22] && cache[27] >= cache[23] && cache[27] >= cache[24] && cache[27] >= cache[25] && cache[27] >= cache[26] && cache[27] >= cache[28]) {
			t->results[pos++] = cache[27];
			cache[27] = *++segments[27];
		} else {
			t->results[pos++] = cache[28];
			cache[28] = *++segments[28];
		}
	}
}
static void merge_30(struct test *t, int **segments, int *cache) {
	size_t pos = 0;
	for (;;) {
		if (cache[0] == 0 && cache[1] == 0 && cache[2] == 0 && cache[3] == 0 && cache[4] == 0 && cache[5] == 0 && cache[6] == 0 && cache[7] == 0 && cache[8] == 0 && cache[9] == 0 && cache[10] == 0 && cache[11] == 0 && cache[12] == 0 && cache[13] == 0 && cache[14] == 0 && cache[15] == 0 && cache[16] == 0 && cache[17] == 0 && cache[18] == 0 && cache[19] == 0 && cache[20] == 0 && cache[21] == 0 && cache[22] == 0 && cache[23] == 0 && cache[24] == 0 && cache[25] == 0 && cache[26] == 0 && cache[27] == 0 && cache[28] == 0 && cache[29] == 0)
			break;

		if (cache[0] >= cache[1] && cache[0] >= cache[2] && cache[0] >= cache[3] && cache[0] >= cache[4] && cache[0] >= cache[5] && cache[0] >= cache[6] && cache[0] >= cache[7] && cache[0] >= cache[8] && cache[0] >= cache[9] && cache[0] >= cache[10] && cache[0] >= cache[11] && cache[0] >= cache[12] && cache[0] >= cache[13] && cache[0] >= cache[14] && cache[0] >= cache[15] && cache[0] >= cache[16] && cache[0] >= cache[17] && cache[0] >= cache[18] && cache[0] >= cache[19] && cache[0] >= cache[20] && cache[0] >= cache[21] && cache[0] >= cache[22] && cache[0] >= cache[23] && cache[0] >= cache[24] && cache[0] >= cache[25] && cache[0] >= cache[26] && cache[0] >= cache[27] && cache[0] >= cache[28] && cache[0] >= cache[29]) {
			t->results[pos++] = cache[0];
			cache[0] = *++segments[0];
		} else if (cache[1] >= cache[0] && cache[1] >= cache[2] && cache[1] >= cache[3] && cache[1] >= cache[4] && cache[1] >= cache[5] && cache[1] >= cache[6] && cache[1] >= cache[7] && cache[1] >= cache[8] && cache[1] >= cache[9] && cache[1] >= cache[10] && cache[1] >= cache[11] && cache[1] >= cache[12] && cache[1] >= cache[13] && cache[1] >= cache[14] && cache[1] >= cache[15] && cache[1] >= cache[16] && cache[1] >= cache[17] && cache[1] >= cache[18] && cache[1] >= cache[19] && cache[1] >= cache[20] && cache[1] >= cache[21] && cache[1] >= cache[22] && cache[1] >= cache[23] && cache[1] >= cache[24] && cache[1] >= cache[25] && cache[1] >= cache[26] && cache[1] >= cache[27] && cache[1] >= cache[28] && cache[1] >= cache[29]) {
			t->results[pos++] = cache[1];
			cache[1] = *++segments[1];
		} else if (cache[2] >= cache[0] && cache[2] >= cache[1] && cache[2] >= cache[3] && cache[2] >= cache[4] && cache[2] >= cache[5] && cache[2] >= cache[6] && cache[2] >= cache[7] && cache[2] >= cache[8] && cache[2] >= cache[9] && cache[2] >= cache[10] && cache[2] >= cache[11] && cache[2] >= cache[12] && cache[2] >= cache[13] && cache[2] >= cache[14] && cache[2] >= cache[15] && cache[2] >= cache[16] && cache[2] >= cache[17] && cache[2] >= cache[18] && cache[2] >= cache[19] && cache[2] >= cache[20] && cache[2] >= cache[21] && cache[2] >= cache[22] && cache[2] >= cache[23] && cache[2] >= cache[24] && cache[2] >= cache[25] && cache[2] >= cache[26] && cache[2] >= cache[27] && cache[2] >= cache[28] && cache[2] >= cache[29]) {
			t->results[pos++] = cache[2];
			cache[2] = *++segments[2];
		} else if (cache[3] >= cache[0] && cache[3] >= cache[1] && cache[3] >= cache[2] && cache[3] >= cache[4] && cache[3] >= cache[5] && cache[3] >= cache[6] && cache[3] >= cache[7] && cache[3] >= cache[8] && cache[3] >= cache[9] && cache[3] >= cache[10] && cache[3] >= cache[11] && cache[3] >= cache[12] && cache[3] >= cache[13] && cache[3] >= cache[14] && cache[3] >= cache[15] && cache[3] >= cache[16] && cache[3] >= cache[17] && cache[3] >= cache[18] && cache[3] >= cache[19] && cache[3] >= cache[20] && cache[3] >= cache[21] && cache[3] >= cache[22] && cache[3] >= cache[23] && cache[3] >= cache[24] && cache[3] >= cache[25] && cache[3] >= cache[26] && cache[3] >= cache[27] && cache[3] >= cache[28] && cache[3] >= cache[29]) {
			t->results[pos++] = cache[3];
			cache[3] = *++segments[3];
		} else if (cache[4] >= cache[0] && cache[4] >= cache[1] && cache[4] >= cache[2] && cache[4] >= cache[3] && cache[4] >= cache[5] && cache[4] >= cache[6] && cache[4] >= cache[7] && cache[4] >= cache[8] && cache[4] >= cache[9] && cache[4] >= cache[10] && cache[4] >= cache[11] && cache[4] >= cache[12] && cache[4] >= cache[13] && cache[4] >= cache[14] && cache[4] >= cache[15] && cache[4] >= cache[16] && cache[4] >= cache[17] && cache[4] >= cache[18] && cache[4] >= cache[19] && cache[4] >= cache[20] && cache[4] >= cache[21] && cache[4] >= cache[22] && cache[4] >= cache[23] && cache[4] >= cache[24] && cache[4] >= cache[25] && cache[4] >= cache[26] && cache[4] >= cache[27] && cache[4] >= cache[28] && cache[4] >= cache[29]) {
			t->results[pos++] = cache[4];
			cache[4] = *++segments[4];
		} else if (cache[5] >= cache[0] && cache[5] >= cache[1] && cache[5] >= cache[2] && cache[5] >= cache[3] && cache[5] >= cache[4] && cache[5] >= cache[6] && cache[5] >= cache[7] && cache[5] >= cache[8] && cache[5] >= cache[9] && cache[5] >= cache[10] && cache[5] >= cache[11] && cache[5] >= cache[12] && cache[5] >= cache[13] && cache[5] >= cache[14] && cache[5] >= cache[15] && cache[5] >= cache[16] && cache[5] >= cache[17] && cache[5] >= cache[18] && cache[5] >= cache[19] && cache[5] >= cache[20] && cache[5] >= cache[21] && cache[5] >= cache[22] && cache[5] >= cache[23] && cache[5] >= cache[24] && cache[5] >= cache[25] && cache[5] >= cache[26] && cache[5] >= cache[27] && cache[5] >= cache[28] && cache[5] >= cache[29]) {
			t->results[pos++] = cache[5];
			cache[5] = *++segments[5];
		} else if (cache[6] >= cache[0] && cache[6] >= cache[1] && cache[6] >= cache[2] && cache[6] >= cache[3] && cache[6] >= cache[4] && cache[6] >= cache[5] && cache[6] >= cache[7] && cache[6] >= cache[8] && cache[6] >= cache[9] && cache[6] >= cache[10] && cache[6] >= cache[11] && cache[6] >= cache[12] && cache[6] >= cache[13] && cache[6] >= cache[14] && cache[6] >= cache[15] && cache[6] >= cache[16] && cache[6] >= cache[17] && cache[6] >= cache[18] && cache[6] >= cache[19] && cache[6] >= cache[20] && cache[6] >= cache[21] && cache[6] >= cache[22] && cache[6] >= cache[23] && cache[6] >= cache[24] && cache[6] >= cache[25] && cache[6] >= cache[26] && cache[6] >= cache[27] && cache[6] >= cache[28] && cache[6] >= cache[29]) {
			t->results[pos++] = cache[6];
			cache[6] = *++segments[6];
		} else if (cache[7] >= cache[0] && cache[7] >= cache[1] && cache[7] >= cache[2] && cache[7] >= cache[3] && cache[7] >= cache[4] && cache[7] >= cache[5] && cache[7] >= cache[6] && cache[7] >= cache[8] && cache[7] >= cache[9] && cache[7] >= cache[10] && cache[7] >= cache[11] && cache[7] >= cache[12] && cache[7] >= cache[13] && cache[7] >= cache[14] && cache[7] >= cache[15] && cache[7] >= cache[16] && cache[7] >= cache[17] && cache[7] >= cache[18] && cache[7] >= cache[19] && cache[7] >= cache[20] && cache[7] >= cache[21] && cache[7] >= cache[22] && cache[7] >= cache[23] && cache[7] >= cache[24] && cache[7] >= cache[25] && cache[7] >= cache[26] && cache[7] >= cache[27] && cache[7] >= cache[28] && cache[7] >= cache[29]) {
			t->results[pos++] = cache[7];
			cache[7] = *++segments[7];
		} else if (cache[8] >= cache[0] && cache[8] >= cache[1] && cache[8] >= cache[2] && cache[8] >= cache[3] && cache[8] >= cache[4] && cache[8] >= cache[5] && cache[8] >= cache[6] && cache[8] >= cache[7] && cache[8] >= cache[9] && cache[8] >= cache[10] && cache[8] >= cache[11] && cache[8] >= cache[12] && cache[8] >= cache[13] && cache[8] >= cache[14] && cache[8] >= cache[15] && cache[8] >= cache[16] && cache[8] >= cache[17] && cache[8] >= cache[18] && cache[8] >= cache[19] && cache[8] >= cache[20] && cache[8] >= cache[21] && cache[8] >= cache[22] && cache[8] >= cache[23] && cache[8] >= cache[24] && cache[8] >= cache[25] && cache[8] >= cache[26] && cache[8] >= cache[27] && cache[8] >= cache[28] && cache[8] >= cache[29]) {
			t->results[pos++] = cache[8];
			cache[8] = *++segments[8];
		} else if (cache[9] >= cache[0] && cache[9] >= cache[1] && cache[9] >= cache[2] && cache[9] >= cache[3] && cache[9] >= cache[4] && cache[9] >= cache[5] && cache[9] >= cache[6] && cache[9] >= cache[7] && cache[9] >= cache[8] && cache[9] >= cache[10] && cache[9] >= cache[11] && cache[9] >= cache[12] && cache[9] >= cache[13] && cache[9] >= cache[14] && cache[9] >= cache[15] && cache[9] >= cache[16] && cache[9] >= cache[17] && cache[9] >= cache[18] && cache[9] >= cache[19] && cache[9] >= cache[20] && cache[9] >= cache[21] && cache[9] >= cache[22] && cache[9] >= cache[23] && cache[9] >= cache[24] && cache[9] >= cache[25] && cache[9] >= cache[26] && cache[9] >= cache[27] && cache[9] >= cache[28] && cache[9] >= cache[29]) {
			t->results[pos++] = cache[9];
			cache[9] = *++segments[9];
		} else if (cache[10] >= cache[0] && cache[10] >= cache[1] && cache[10] >= cache[2] && cache[10] >= cache[3] && cache[10] >= cache[4] && cache[10] >= cache[5] && cache[10] >= cache[6] && cache[10] >= cache[7] && cache[10] >= cache[8] && cache[10] >= cache[9] && cache[10] >= cache[11] && cache[10] >= cache[12] && cache[10] >= cache[13] && cache[10] >= cache[14] && cache[10] >= cache[15] && cache[10] >= cache[16] && cache[10] >= cache[17] && cache[10] >= cache[18] && cache[10] >= cache[19] && cache[10] >= cache[20] && cache[10] >= cache[21] && cache[10] >= cache[22] && cache[10] >= cache[23] && cache[10] >= cache[24] && cache[10] >= cache[25] && cache[10] >= cache[26] && cache[10] >= cache[27] && cache[10] >= cache[28] && cache[10] >= cache[29]) {
			t->results[pos++] = cache[10];
			cache[10] = *++segments[10];
		} else if (cache[11] >= cache[0] && cache[11] >= cache[1] && cache[11] >= cache[2] && cache[11] >= cache[3] && cache[11] >= cache[4] && cache[11] >= cache[5] && cache[11] >= cache[6] && cache[11] >= cache[7] && cache[11] >= cache[8] && cache[11] >= cache[9] && cache[11] >= cache[10] && cache[11] >= cache[12] && cache[11] >= cache[13] && cache[11] >= cache[14] && cache[11] >= cache[15] && cache[11] >= cache[16] && cache[11] >= cache[17] && cache[11] >= cache[18] && cache[11] >= cache[19] && cache[11] >= cache[20] && cache[11] >= cache[21] && cache[11] >= cache[22] && cache[11] >= cache[23] && cache[11] >= cache[24] && cache[11] >= cache[25] && cache[11] >= cache[26] && cache[11] >= cache[27] && cache[11] >= cache[28] && cache[11] >= cache[29]) {
			t->results[pos++] = cache[11];
			cache[11] = *++segments[11];
		} else if (cache[12] >= cache[0] && cache[12] >= cache[1] && cache[12] >= cache[2] && cache[12] >= cache[3] && cache[12] >= cache[4] && cache[12] >= cache[5] && cache[12] >= cache[6] && cache[12] >= cache[7] && cache[12] >= cache[8] && cache[12] >= cache[9] && cache[12] >= cache[10] && cache[12] >= cache[11] && cache[12] >= cache[13] && cache[12] >= cache[14] && cache[12] >= cache[15] && cache[12] >= cache[16] && cache[12] >= cache[17] && cache[12] >= cache[18] && cache[12] >= cache[19] && cache[12] >= cache[20] && cache[12] >= cache[21] && cache[12] >= cache[22] && cache[12] >= cache[23] && cache[12] >= cache[24] && cache[12] >= cache[25] && cache[12] >= cache[26] && cache[12] >= cache[27] && cache[12] >= cache[28] && cache[12] >= cache[29]) {
			t->results[pos++] = cache[12];
			cache[12] = *++segments[12];
		} else if (cache[13] >= cache[0] && cache[13] >= cache[1] && cache[13] >= cache[2] && cache[13] >= cache[3] && cache[13] >= cache[4] && cache[13] >= cache[5] && cache[13] >= cache[6] && cache[13] >= cache[7] && cache[13] >= cache[8] && cache[13] >= cache[9] && cache[13] >= cache[10] && cache[13] >= cache[11] && cache[13] >= cache[12] && cache[13] >= cache[14] && cache[13] >= cache[15] && cache[13] >= cache[16] && cache[13] >= cache[17] && cache[13] >= cache[18] && cache[13] >= cache[19] && cache[13] >= cache[20] && cache[13] >= cache[21] && cache[13] >= cache[22] && cache[13] >= cache[23] && cache[13] >= cache[24] && cache[13] >= cache[25] && cache[13] >= cache[26] && cache[13] >= cache[27] && cache[13] >= cache[28] && cache[13] >= cache[29]) {
			t->results[pos++] = cache[13];
			cache[13] = *++segments[13];
		} else if (cache[14] >= cache[0] && cache[14] >= cache[1] && cache[14] >= cache[2] && cache[14] >= cache[3] && cache[14] >= cache[4] && cache[14] >= cache[5] && cache[14] >= cache[6] && cache[14] >= cache[7] && cache[14] >= cache[8] && cache[14] >= cache[9] && cache[14] >= cache[10] && cache[14] >= cache[11] && cache[14] >= cache[12] && cache[14] >= cache[13] && cache[14] >= cache[15] && cache[14] >= cache[16] && cache[14] >= cache[17] && cache[14] >= cache[18] && cache[14] >= cache[19] && cache[14] >= cache[20] && cache[14] >= cache[21] && cache[14] >= cache[22] && cache[14] >= cache[23] && cache[14] >= cache[24] && cache[14] >= cache[25] && cache[14] >= cache[26] && cache[14] >= cache[27] && cache[14] >= cache[28] && cache[14] >= cache[29]) {
			t->results[pos++] = cache[14];
			cache[14] = *++segments[14];
		} else if (cache[15] >= cache[0] && cache[15] >= cache[1] && cache[15] >= cache[2] && cache[15] >= cache[3] && cache[15] >= cache[4] && cache[15] >= cache[5] && cache[15] >= cache[6] && cache[15] >= cache[7] && cache[15] >= cache[8] && cache[15] >= cache[9] && cache[15] >= cache[10] && cache[15] >= cache[11] && cache[15] >= cache[12] && cache[15] >= cache[13] && cache[15] >= cache[14] && cache[15] >= cache[16] && cache[15] >= cache[17] && cache[15] >= cache[18] && cache[15] >= cache[19] && cache[15] >= cache[20] && cache[15] >= cache[21] && cache[15] >= cache[22] && cache[15] >= cache[23] && cache[15] >= cache[24] && cache[15] >= cache[25] && cache[15] >= cache[26] && cache[15] >= cache[27] && cache[15] >= cache[28] && cache[15] >= cache[29]) {
			t->results[pos++] = cache[15];
			cache[15] = *++segments[15];
		} else if (cache[16] >= cache[0] && cache[16] >= cache[1] && cache[16] >= cache[2] && cache[16] >= cache[3] && cache[16] >= cache[4] && cache[16] >= cache[5] && cache[16] >= cache[6] && cache[16] >= cache[7] && cache[16] >= cache[8] && cache[16] >= cache[9] && cache[16] >= cache[10] && cache[16] >= cache[11] && cache[16] >= cache[12] && cache[16] >= cache[13] && cache[16] >= cache[14] && cache[16] >= cache[15] && cache[16] >= cache[17] && cache[16] >= cache[18] && cache[16] >= cache[19] && cache[16] >= cache[20] && cache[16] >= cache[21] && cache[16] >= cache[22] && cache[16] >= cache[23] && cache[16] >= cache[24] && cache[16] >= cache[25] && cache[16] >= cache[26] && cache[16] >= cache[27] && cache[16] >= cache[28] && cache[16] >= cache[29]) {
			t->results[pos++] = cache[16];
			cache[16] = *++segments[16];
		} else if (cache[17] >= cache[0] && cache[17] >= cache[1] && cache[17] >= cache[2] && cache[17] >= cache[3] && cache[17] >= cache[4] && cache[17] >= cache[5] && cache[17] >= cache[6] && cache[17] >= cache[7] && cache[17] >= cache[8] && cache[17] >= cache[9] && cache[17] >= cache[10] && cache[17] >= cache[11] && cache[17] >= cache[12] && cache[17] >= cache[13] && cache[17] >= cache[14] && cache[17] >= cache[15] && cache[17] >= cache[16] && cache[17] >= cache[18] && cache[17] >= cache[19] && cache[17] >= cache[20] && cache[17] >= cache[21] && cache[17] >= cache[22] && cache[17] >= cache[23] && cache[17] >= cache[24] && cache[17] >= cache[25] && cache[17] >= cache[26] && cache[17] >= cache[27] && cache[17] >= cache[28] && cache[17] >= cache[29]) {
			t->results[pos++] = cache[17];
			cache[17] = *++segments[17];
		} else if (cache[18] >= cache[0] && cache[18] >= cache[1] && cache[18] >= cache[2] && cache[18] >= cache[3] && cache[18] >= cache[4] && cache[18] >= cache[5] && cache[18] >= cache[6] && cache[18] >= cache[7] && cache[18] >= cache[8] && cache[18] >= cache[9] && cache[18] >= cache[10] && cache[18] >= cache[11] && cache[18] >= cache[12] && cache[18] >= cache[13] && cache[18] >= cache[14] && cache[18] >= cache[15] && cache[18] >= cache[16] && cache[18] >= cache[17] && cache[18] >= cache[19] && cache[18] >= cache[20] && cache[18] >= cache[21] && cache[18] >= cache[22] && cache[18] >= cache[23] && cache[18] >= cache[24] && cache[18] >= cache[25] && cache[18] >= cache[26] && cache[18] >= cache[27] && cache[18] >= cache[28] && cache[18] >= cache[29]) {
			t->results[pos++] = cache[18];
			cache[18] = *++segments[18];
		} else if (cache[19] >= cache[0] && cache[19] >= cache[1] && cache[19] >= cache[2] && cache[19] >= cache[3] && cache[19] >= cache[4] && cache[19] >= cache[5] && cache[19] >= cache[6] && cache[19] >= cache[7] && cache[19] >= cache[8] && cache[19] >= cache[9] && cache[19] >= cache[10] && cache[19] >= cache[11] && cache[19] >= cache[12] && cache[19] >= cache[13] && cache[19] >= cache[14] && cache[19] >= cache[15] && cache[19] >= cache[16] && cache[19] >= cache[17] && cache[19] >= cache[18] && cache[19] >= cache[20] && cache[19] >= cache[21] && cache[19] >= cache[22] && cache[19] >= cache[23] && cache[19] >= cache[24] && cache[19] >= cache[25] && cache[19] >= cache[26] && cache[19] >= cache[27] && cache[19] >= cache[28] && cache[19] >= cache[29]) {
			t->results[pos++] = cache[19];
			cache[19] = *++segments[19];
		} else if (cache[20] >= cache[0] && cache[20] >= cache[1] && cache[20] >= cache[2] && cache[20] >= cache[3] && cache[20] >= cache[4] && cache[20] >= cache[5] && cache[20] >= cache[6] && cache[20] >= cache[7] && cache[20] >= cache[8] && cache[20] >= cache[9] && cache[20] >= cache[10] && cache[20] >= cache[11] && cache[20] >= cache[12] && cache[20] >= cache[13] && cache[20] >= cache[14] && cache[20] >= cache[15] && cache[20] >= cache[16] && cache[20] >= cache[17] && cache[20] >= cache[18] && cache[20] >= cache[19] && cache[20] >= cache[21] && cache[20] >= cache[22] && cache[20] >= cache[23] && cache[20] >= cache[24] && cache[20] >= cache[25] && cache[20] >= cache[26] && cache[20] >= cache[27] && cache[20] >= cache[28] && cache[20] >= cache[29]) {
			t->results[pos++] = cache[20];
			cache[20] = *++segments[20];
		} else if (cache[21] >= cache[0] && cache[21] >= cache[1] && cache[21] >= cache[2] && cache[21] >= cache[3] && cache[21] >= cache[4] && cache[21] >= cache[5] && cache[21] >= cache[6] && cache[21] >= cache[7] && cache[21] >= cache[8] && cache[21] >= cache[9] && cache[21] >= cache[10] && cache[21] >= cache[11] && cache[21] >= cache[12] && cache[21] >= cache[13] && cache[21] >= cache[14] && cache[21] >= cache[15] && cache[21] >= cache[16] && cache[21] >= cache[17] && cache[21] >= cache[18] && cache[21] >= cache[19] && cache[21] >= cache[20] && cache[21] >= cache[22] && cache[21] >= cache[23] && cache[21] >= cache[24] && cache[21] >= cache[25] && cache[21] >= cache[26] && cache[21] >= cache[27] && cache[21] >= cache[28] && cache[21] >= cache[29]) {
			t->results[pos++] = cache[21];
			cache[21] = *++segments[21];
		} else if (cache[22] >= cache[0] && cache[22] >= cache[1] && cache[22] >= cache[2] && cache[22] >= cache[3] && cache[22] >= cache[4] && cache[22] >= cache[5] && cache[22] >= cache[6] && cache[22] >= cache[7] && cache[22] >= cache[8] && cache[22] >= cache[9] && cache[22] >= cache[10] && cache[22] >= cache[11] && cache[22] >= cache[12] && cache[22] >= cache[13] && cache[22] >= cache[14] && cache[22] >= cache[15] && cache[22] >= cache[16] && cache[22] >= cache[17] && cache[22] >= cache[18] && cache[22] >= cache[19] && cache[22] >= cache[20] && cache[22] >= cache[21] && cache[22] >= cache[23] && cache[22] >= cache[24] && cache[22] >= cache[25] && cache[22] >= cache[26] && cache[22] >= cache[27] && cache[22] >= cache[28] && cache[22] >= cache[29]) {
			t->results[pos++] = cache[22];
			cache[22] = *++segments[22];
		} else if (cache[23] >= cache[0] && cache[23] >= cache[1] && cache[23] >= cache[2] && cache[23] >= cache[3] && cache[23] >= cache[4] && cache[23] >= cache[5] && cache[23] >= cache[6] && cache[23] >= cache[7] && cache[23] >= cache[8] && cache[23] >= cache[9] && cache[23] >= cache[10] && cache[23] >= cache[11] && cache[23] >= cache[12] && cache[23] >= cache[13] && cache[23] >= cache[14] && cache[23] >= cache[15] && cache[23] >= cache[16] && cache[23] >= cache[17] && cache[23] >= cache[18] && cache[23] >= cache[19] && cache[23] >= cache[20] && cache[23] >= cache[21] && cache[23] >= cache[22] && cache[23] >= cache[24] && cache[23] >= cache[25] && cache[23] >= cache[26] && cache[23] >= cache[27] && cache[23] >= cache[28] && cache[23] >= cache[29]) {
			t->results[pos++] = cache[23];
			cache[23] = *++segments[23];
		} else if (cache[24] >= cache[0] && cache[24] >= cache[1] && cache[24] >= cache[2] && cache[24] >= cache[3] && cache[24] >= cache[4] && cache[24] >= cache[5] && cache[24] >= cache[6] && cache[24] >= cache[7] && cache[24] >= cache[8] && cache[24] >= cache[9] && cache[24] >= cache[10] && cache[24] >= cache[11] && cache[24] >= cache[12] && cache[24] >= cache[13] && cache[24] >= cache[14] && cache[24] >= cache[15] && cache[24] >= cache[16] && cache[24] >= cache[17] && cache[24] >= cache[18] && cache[24] >= cache[19] && cache[24] >= cache[20] && cache[24] >= cache[21] && cache[24] >= cache[22] && cache[24] >= cache[23] && cache[24] >= cache[25] && cache[24] >= cache[26] && cache[24] >= cache[27] && cache[24] >= cache[28] && cache[24] >= cache[29]) {
			t->results[pos++] = cache[24];
			cache[24] = *++segments[24];
		} else if (cache[25] >= cache[0] && cache[25] >= cache[1] && cache[25] >= cache[2] && cache[25] >= cache[3] && cache[25] >= cache[4] && cache[25] >= cache[5] && cache[25] >= cache[6] && cache[25] >= cache[7] && cache[25] >= cache[8] && cache[25] >= cache[9] && cache[25] >= cache[10] && cache[25] >= cache[11] && cache[25] >= cache[12] && cache[25] >= cache[13] && cache[25] >= cache[14] && cache[25] >= cache[15] && cache[25] >= cache[16] && cache[25] >= cache[17] && cache[25] >= cache[18] && cache[25] >= cache[19] && cache[25] >= cache[20] && cache[25] >= cache[21] && cache[25] >= cache[22] && cache[25] >= cache[23] && cache[25] >= cache[24] && cache[25] >= cache[26] && cache[25] >= cache[27] && cache[25] >= cache[28] && cache[25] >= cache[29]) {
			t->results[pos++] = cache[25];
			cache[25] = *++segments[25];
		} else if (cache[26] >= cache[0] && cache[26] >= cache[1] && cache[26] >= cache[2] && cache[26] >= cache[3] && cache[26] >= cache[4] && cache[26] >= cache[5] && cache[26] >= cache[6] && cache[26] >= cache[7] && cache[26] >= cache[8] && cache[26] >= cache[9] && cache[26] >= cache[10] && cache[26] >= cache[11] && cache[26] >= cache[12] && cache[26] >= cache[13] && cache[26] >= cache[14] && cache[26] >= cache[15] && cache[26] >= cache[16] && cache[26] >= cache[17] && cache[26] >= cache[18] && cache[26] >= cache[19] && cache[26] >= cache[20] && cache[26] >= cache[21] && cache[26] >= cache[22] && cache[26] >= cache[23] && cache[26] >= cache[24] && cache[26] >= cache[25] && cache[26] >= cache[27] && cache[26] >= cache[28] && cache[26] >= cache[29]) {
			t->results[pos++] = cache[26];
			cache[26] = *++segments[26];
		} else if (cache[27] >= cache[0] && cache[27] >= cache[1] && cache[27] >= cache[2] && cache[27] >= cache[3] && cache[27] >= cache[4] && cache[27] >= cache[5] && cache[27] >= cache[6] && cache[27] >= cache[7] && cache[27] >= cache[8] && cache[27] >= cache[9] && cache[27] >= cache[10] && cache[27] >= cache[11] && cache[27] >= cache[12] && cache[27] >= cache[13] && cache[27] >= cache[14] && cache[27] >= cache[15] && cache[27] >= cache[16] && cache[27] >= cache[17] && cache[27] >= cache[18] && cache[27] >= cache[19] && cache[27] >= cache[20] && cache[27] >= cache[21] && cache[27] >= cache[22] && cache[27] >= cache[23] && cache[27] >= cache[24] && cache[27] >= cache[25] && cache[27] >= cache[26] && cache[27] >= cache[28] && cache[27] >= cache[29]) {
			t->results[pos++] = cache[27];
			cache[27] = *++segments[27];
		} else if (cache[28] >= cache[0] && cache[28] >= cache[1] && cache[28] >= cache[2] && cache[28] >= cache[3] && cache[28] >= cache[4] && cache[28] >= cache[5] && cache[28] >= cache[6] && cache[28] >= cache[7] && cache[28] >= cache[8] && cache[28] >= cache[9] && cache[28] >= cache[10] && cache[28] >= cache[11] && cache[28] >= cache[12] && cache[28] >= cache[13] && cache[28] >= cache[14] && cache[28] >= cache[15] && cache[28] >= cache[16] && cache[28] >= cache[17] && cache[28] >= cache[18] && cache[28] >= cache[19] && cache[28] >= cache[20] && cache[28] >= cache[21] && cache[28] >= cache[22] && cache[28] >= cache[23] && cache[28] >= cache[24] && cache[28] >= cache[25] && cache[28] >= cache[26] && cache[28] >= cache[27] && cache[28] >= cache[29]) {
			t->results[pos++] = cache[28];
			cache[28] = *++segments[28];
		} else {
			t->results[pos++] = cache[29];
			cache[29] = *++segments[29];
		}
	}
}
static bool merge_k(struct test *t, int n, int **segments, int *cache) {
	if (n > 30)
		return false;

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
	case 21:
		merge_21(t, segments, cache);
		break;
	case 22:
		merge_22(t, segments, cache);
		break;
	case 23:
		merge_23(t, segments, cache);
		break;
	case 24:
		merge_24(t, segments, cache);
		break;
	case 25:
		merge_25(t, segments, cache);
		break;
	case 26:
		merge_26(t, segments, cache);
		break;
	case 27:
		merge_27(t, segments, cache);
		break;
	case 28:
		merge_28(t, segments, cache);
		break;
	case 29:
		merge_29(t, segments, cache);
		break;
	case 30:
		merge_30(t, segments, cache);
		break;
	}

	return true;
}
