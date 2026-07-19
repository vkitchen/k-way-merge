static void merge_3(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		}
	}
}
static void merge_4(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		}
	}
}
static void merge_5(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		}
	}
}
static void merge_6(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		}
	}
}
static void merge_7(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		}
	}
}
static void merge_8(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		}
	}
}
static void merge_9(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		}
	}
}
static void merge_10(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		}
	}
}
static void merge_11(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		}
	}
}
static void merge_12(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		}
	}
}
static void merge_13(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		}
	}
}
static void merge_14(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		}
	}
}
static void merge_15(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		}
	}
}
static void merge_16(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		}
	}
}
static void merge_17(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		}
	}
}
static void merge_18(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		}
	}
}
static void merge_19(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		}
	}
}
static void merge_20(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		}
	}
}
static void merge_21(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		}
	}
}
static void merge_22(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		}
	}
}
static void merge_23(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		}
	}
}
static void merge_24(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		}
	}
}
static void merge_25(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	int cache24 = cache[24];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0 && cache24 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23 && cache0 >= cache24) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23 && cache1 >= cache24) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23 && cache2 >= cache24) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23 && cache3 >= cache24) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23 && cache4 >= cache24) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23 && cache5 >= cache24) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23 && cache6 >= cache24) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23 && cache7 >= cache24) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23 && cache8 >= cache24) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23 && cache9 >= cache24) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23 && cache10 >= cache24) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23 && cache11 >= cache24) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23 && cache12 >= cache24) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23 && cache13 >= cache24) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23 && cache14 >= cache24) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23 && cache15 >= cache24) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23 && cache16 >= cache24) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23 && cache17 >= cache24) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23 && cache18 >= cache24) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23 && cache19 >= cache24) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23 && cache20 >= cache24) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23 && cache21 >= cache24) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23 && cache22 >= cache24) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else if (cache23 >= cache0 && cache23 >= cache1 && cache23 >= cache2 && cache23 >= cache3 && cache23 >= cache4 && cache23 >= cache5 && cache23 >= cache6 && cache23 >= cache7 && cache23 >= cache8 && cache23 >= cache9 && cache23 >= cache10 && cache23 >= cache11 && cache23 >= cache12 && cache23 >= cache13 && cache23 >= cache14 && cache23 >= cache15 && cache23 >= cache16 && cache23 >= cache17 && cache23 >= cache18 && cache23 >= cache19 && cache23 >= cache20 && cache23 >= cache21 && cache23 >= cache22 && cache23 >= cache24) {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		} else {
			t->results[pos++] = cache24;
			cache24 = *++segments[24];
		}
	}
}
static void merge_26(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	int cache24 = cache[24];
	int cache25 = cache[25];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0 && cache24 == 0 && cache25 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23 && cache0 >= cache24 && cache0 >= cache25) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23 && cache1 >= cache24 && cache1 >= cache25) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23 && cache2 >= cache24 && cache2 >= cache25) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23 && cache3 >= cache24 && cache3 >= cache25) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23 && cache4 >= cache24 && cache4 >= cache25) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23 && cache5 >= cache24 && cache5 >= cache25) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23 && cache6 >= cache24 && cache6 >= cache25) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23 && cache7 >= cache24 && cache7 >= cache25) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23 && cache8 >= cache24 && cache8 >= cache25) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23 && cache9 >= cache24 && cache9 >= cache25) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23 && cache10 >= cache24 && cache10 >= cache25) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23 && cache11 >= cache24 && cache11 >= cache25) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23 && cache12 >= cache24 && cache12 >= cache25) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23 && cache13 >= cache24 && cache13 >= cache25) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23 && cache14 >= cache24 && cache14 >= cache25) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23 && cache15 >= cache24 && cache15 >= cache25) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23 && cache16 >= cache24 && cache16 >= cache25) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23 && cache17 >= cache24 && cache17 >= cache25) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23 && cache18 >= cache24 && cache18 >= cache25) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23 && cache19 >= cache24 && cache19 >= cache25) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23 && cache20 >= cache24 && cache20 >= cache25) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23 && cache21 >= cache24 && cache21 >= cache25) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23 && cache22 >= cache24 && cache22 >= cache25) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else if (cache23 >= cache0 && cache23 >= cache1 && cache23 >= cache2 && cache23 >= cache3 && cache23 >= cache4 && cache23 >= cache5 && cache23 >= cache6 && cache23 >= cache7 && cache23 >= cache8 && cache23 >= cache9 && cache23 >= cache10 && cache23 >= cache11 && cache23 >= cache12 && cache23 >= cache13 && cache23 >= cache14 && cache23 >= cache15 && cache23 >= cache16 && cache23 >= cache17 && cache23 >= cache18 && cache23 >= cache19 && cache23 >= cache20 && cache23 >= cache21 && cache23 >= cache22 && cache23 >= cache24 && cache23 >= cache25) {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		} else if (cache24 >= cache0 && cache24 >= cache1 && cache24 >= cache2 && cache24 >= cache3 && cache24 >= cache4 && cache24 >= cache5 && cache24 >= cache6 && cache24 >= cache7 && cache24 >= cache8 && cache24 >= cache9 && cache24 >= cache10 && cache24 >= cache11 && cache24 >= cache12 && cache24 >= cache13 && cache24 >= cache14 && cache24 >= cache15 && cache24 >= cache16 && cache24 >= cache17 && cache24 >= cache18 && cache24 >= cache19 && cache24 >= cache20 && cache24 >= cache21 && cache24 >= cache22 && cache24 >= cache23 && cache24 >= cache25) {
			t->results[pos++] = cache24;
			cache24 = *++segments[24];
		} else {
			t->results[pos++] = cache25;
			cache25 = *++segments[25];
		}
	}
}
static void merge_27(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	int cache24 = cache[24];
	int cache25 = cache[25];
	int cache26 = cache[26];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0 && cache24 == 0 && cache25 == 0 && cache26 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23 && cache0 >= cache24 && cache0 >= cache25 && cache0 >= cache26) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23 && cache1 >= cache24 && cache1 >= cache25 && cache1 >= cache26) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23 && cache2 >= cache24 && cache2 >= cache25 && cache2 >= cache26) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23 && cache3 >= cache24 && cache3 >= cache25 && cache3 >= cache26) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23 && cache4 >= cache24 && cache4 >= cache25 && cache4 >= cache26) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23 && cache5 >= cache24 && cache5 >= cache25 && cache5 >= cache26) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23 && cache6 >= cache24 && cache6 >= cache25 && cache6 >= cache26) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23 && cache7 >= cache24 && cache7 >= cache25 && cache7 >= cache26) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23 && cache8 >= cache24 && cache8 >= cache25 && cache8 >= cache26) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23 && cache9 >= cache24 && cache9 >= cache25 && cache9 >= cache26) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23 && cache10 >= cache24 && cache10 >= cache25 && cache10 >= cache26) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23 && cache11 >= cache24 && cache11 >= cache25 && cache11 >= cache26) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23 && cache12 >= cache24 && cache12 >= cache25 && cache12 >= cache26) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23 && cache13 >= cache24 && cache13 >= cache25 && cache13 >= cache26) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23 && cache14 >= cache24 && cache14 >= cache25 && cache14 >= cache26) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23 && cache15 >= cache24 && cache15 >= cache25 && cache15 >= cache26) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23 && cache16 >= cache24 && cache16 >= cache25 && cache16 >= cache26) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23 && cache17 >= cache24 && cache17 >= cache25 && cache17 >= cache26) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23 && cache18 >= cache24 && cache18 >= cache25 && cache18 >= cache26) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23 && cache19 >= cache24 && cache19 >= cache25 && cache19 >= cache26) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23 && cache20 >= cache24 && cache20 >= cache25 && cache20 >= cache26) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23 && cache21 >= cache24 && cache21 >= cache25 && cache21 >= cache26) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23 && cache22 >= cache24 && cache22 >= cache25 && cache22 >= cache26) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else if (cache23 >= cache0 && cache23 >= cache1 && cache23 >= cache2 && cache23 >= cache3 && cache23 >= cache4 && cache23 >= cache5 && cache23 >= cache6 && cache23 >= cache7 && cache23 >= cache8 && cache23 >= cache9 && cache23 >= cache10 && cache23 >= cache11 && cache23 >= cache12 && cache23 >= cache13 && cache23 >= cache14 && cache23 >= cache15 && cache23 >= cache16 && cache23 >= cache17 && cache23 >= cache18 && cache23 >= cache19 && cache23 >= cache20 && cache23 >= cache21 && cache23 >= cache22 && cache23 >= cache24 && cache23 >= cache25 && cache23 >= cache26) {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		} else if (cache24 >= cache0 && cache24 >= cache1 && cache24 >= cache2 && cache24 >= cache3 && cache24 >= cache4 && cache24 >= cache5 && cache24 >= cache6 && cache24 >= cache7 && cache24 >= cache8 && cache24 >= cache9 && cache24 >= cache10 && cache24 >= cache11 && cache24 >= cache12 && cache24 >= cache13 && cache24 >= cache14 && cache24 >= cache15 && cache24 >= cache16 && cache24 >= cache17 && cache24 >= cache18 && cache24 >= cache19 && cache24 >= cache20 && cache24 >= cache21 && cache24 >= cache22 && cache24 >= cache23 && cache24 >= cache25 && cache24 >= cache26) {
			t->results[pos++] = cache24;
			cache24 = *++segments[24];
		} else if (cache25 >= cache0 && cache25 >= cache1 && cache25 >= cache2 && cache25 >= cache3 && cache25 >= cache4 && cache25 >= cache5 && cache25 >= cache6 && cache25 >= cache7 && cache25 >= cache8 && cache25 >= cache9 && cache25 >= cache10 && cache25 >= cache11 && cache25 >= cache12 && cache25 >= cache13 && cache25 >= cache14 && cache25 >= cache15 && cache25 >= cache16 && cache25 >= cache17 && cache25 >= cache18 && cache25 >= cache19 && cache25 >= cache20 && cache25 >= cache21 && cache25 >= cache22 && cache25 >= cache23 && cache25 >= cache24 && cache25 >= cache26) {
			t->results[pos++] = cache25;
			cache25 = *++segments[25];
		} else {
			t->results[pos++] = cache26;
			cache26 = *++segments[26];
		}
	}
}
static void merge_28(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	int cache24 = cache[24];
	int cache25 = cache[25];
	int cache26 = cache[26];
	int cache27 = cache[27];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0 && cache24 == 0 && cache25 == 0 && cache26 == 0 && cache27 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23 && cache0 >= cache24 && cache0 >= cache25 && cache0 >= cache26 && cache0 >= cache27) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23 && cache1 >= cache24 && cache1 >= cache25 && cache1 >= cache26 && cache1 >= cache27) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23 && cache2 >= cache24 && cache2 >= cache25 && cache2 >= cache26 && cache2 >= cache27) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23 && cache3 >= cache24 && cache3 >= cache25 && cache3 >= cache26 && cache3 >= cache27) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23 && cache4 >= cache24 && cache4 >= cache25 && cache4 >= cache26 && cache4 >= cache27) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23 && cache5 >= cache24 && cache5 >= cache25 && cache5 >= cache26 && cache5 >= cache27) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23 && cache6 >= cache24 && cache6 >= cache25 && cache6 >= cache26 && cache6 >= cache27) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23 && cache7 >= cache24 && cache7 >= cache25 && cache7 >= cache26 && cache7 >= cache27) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23 && cache8 >= cache24 && cache8 >= cache25 && cache8 >= cache26 && cache8 >= cache27) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23 && cache9 >= cache24 && cache9 >= cache25 && cache9 >= cache26 && cache9 >= cache27) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23 && cache10 >= cache24 && cache10 >= cache25 && cache10 >= cache26 && cache10 >= cache27) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23 && cache11 >= cache24 && cache11 >= cache25 && cache11 >= cache26 && cache11 >= cache27) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23 && cache12 >= cache24 && cache12 >= cache25 && cache12 >= cache26 && cache12 >= cache27) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23 && cache13 >= cache24 && cache13 >= cache25 && cache13 >= cache26 && cache13 >= cache27) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23 && cache14 >= cache24 && cache14 >= cache25 && cache14 >= cache26 && cache14 >= cache27) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23 && cache15 >= cache24 && cache15 >= cache25 && cache15 >= cache26 && cache15 >= cache27) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23 && cache16 >= cache24 && cache16 >= cache25 && cache16 >= cache26 && cache16 >= cache27) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23 && cache17 >= cache24 && cache17 >= cache25 && cache17 >= cache26 && cache17 >= cache27) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23 && cache18 >= cache24 && cache18 >= cache25 && cache18 >= cache26 && cache18 >= cache27) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23 && cache19 >= cache24 && cache19 >= cache25 && cache19 >= cache26 && cache19 >= cache27) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23 && cache20 >= cache24 && cache20 >= cache25 && cache20 >= cache26 && cache20 >= cache27) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23 && cache21 >= cache24 && cache21 >= cache25 && cache21 >= cache26 && cache21 >= cache27) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23 && cache22 >= cache24 && cache22 >= cache25 && cache22 >= cache26 && cache22 >= cache27) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else if (cache23 >= cache0 && cache23 >= cache1 && cache23 >= cache2 && cache23 >= cache3 && cache23 >= cache4 && cache23 >= cache5 && cache23 >= cache6 && cache23 >= cache7 && cache23 >= cache8 && cache23 >= cache9 && cache23 >= cache10 && cache23 >= cache11 && cache23 >= cache12 && cache23 >= cache13 && cache23 >= cache14 && cache23 >= cache15 && cache23 >= cache16 && cache23 >= cache17 && cache23 >= cache18 && cache23 >= cache19 && cache23 >= cache20 && cache23 >= cache21 && cache23 >= cache22 && cache23 >= cache24 && cache23 >= cache25 && cache23 >= cache26 && cache23 >= cache27) {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		} else if (cache24 >= cache0 && cache24 >= cache1 && cache24 >= cache2 && cache24 >= cache3 && cache24 >= cache4 && cache24 >= cache5 && cache24 >= cache6 && cache24 >= cache7 && cache24 >= cache8 && cache24 >= cache9 && cache24 >= cache10 && cache24 >= cache11 && cache24 >= cache12 && cache24 >= cache13 && cache24 >= cache14 && cache24 >= cache15 && cache24 >= cache16 && cache24 >= cache17 && cache24 >= cache18 && cache24 >= cache19 && cache24 >= cache20 && cache24 >= cache21 && cache24 >= cache22 && cache24 >= cache23 && cache24 >= cache25 && cache24 >= cache26 && cache24 >= cache27) {
			t->results[pos++] = cache24;
			cache24 = *++segments[24];
		} else if (cache25 >= cache0 && cache25 >= cache1 && cache25 >= cache2 && cache25 >= cache3 && cache25 >= cache4 && cache25 >= cache5 && cache25 >= cache6 && cache25 >= cache7 && cache25 >= cache8 && cache25 >= cache9 && cache25 >= cache10 && cache25 >= cache11 && cache25 >= cache12 && cache25 >= cache13 && cache25 >= cache14 && cache25 >= cache15 && cache25 >= cache16 && cache25 >= cache17 && cache25 >= cache18 && cache25 >= cache19 && cache25 >= cache20 && cache25 >= cache21 && cache25 >= cache22 && cache25 >= cache23 && cache25 >= cache24 && cache25 >= cache26 && cache25 >= cache27) {
			t->results[pos++] = cache25;
			cache25 = *++segments[25];
		} else if (cache26 >= cache0 && cache26 >= cache1 && cache26 >= cache2 && cache26 >= cache3 && cache26 >= cache4 && cache26 >= cache5 && cache26 >= cache6 && cache26 >= cache7 && cache26 >= cache8 && cache26 >= cache9 && cache26 >= cache10 && cache26 >= cache11 && cache26 >= cache12 && cache26 >= cache13 && cache26 >= cache14 && cache26 >= cache15 && cache26 >= cache16 && cache26 >= cache17 && cache26 >= cache18 && cache26 >= cache19 && cache26 >= cache20 && cache26 >= cache21 && cache26 >= cache22 && cache26 >= cache23 && cache26 >= cache24 && cache26 >= cache25 && cache26 >= cache27) {
			t->results[pos++] = cache26;
			cache26 = *++segments[26];
		} else {
			t->results[pos++] = cache27;
			cache27 = *++segments[27];
		}
	}
}
static void merge_29(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	int cache24 = cache[24];
	int cache25 = cache[25];
	int cache26 = cache[26];
	int cache27 = cache[27];
	int cache28 = cache[28];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0 && cache24 == 0 && cache25 == 0 && cache26 == 0 && cache27 == 0 && cache28 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23 && cache0 >= cache24 && cache0 >= cache25 && cache0 >= cache26 && cache0 >= cache27 && cache0 >= cache28) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23 && cache1 >= cache24 && cache1 >= cache25 && cache1 >= cache26 && cache1 >= cache27 && cache1 >= cache28) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23 && cache2 >= cache24 && cache2 >= cache25 && cache2 >= cache26 && cache2 >= cache27 && cache2 >= cache28) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23 && cache3 >= cache24 && cache3 >= cache25 && cache3 >= cache26 && cache3 >= cache27 && cache3 >= cache28) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23 && cache4 >= cache24 && cache4 >= cache25 && cache4 >= cache26 && cache4 >= cache27 && cache4 >= cache28) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23 && cache5 >= cache24 && cache5 >= cache25 && cache5 >= cache26 && cache5 >= cache27 && cache5 >= cache28) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23 && cache6 >= cache24 && cache6 >= cache25 && cache6 >= cache26 && cache6 >= cache27 && cache6 >= cache28) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23 && cache7 >= cache24 && cache7 >= cache25 && cache7 >= cache26 && cache7 >= cache27 && cache7 >= cache28) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23 && cache8 >= cache24 && cache8 >= cache25 && cache8 >= cache26 && cache8 >= cache27 && cache8 >= cache28) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23 && cache9 >= cache24 && cache9 >= cache25 && cache9 >= cache26 && cache9 >= cache27 && cache9 >= cache28) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23 && cache10 >= cache24 && cache10 >= cache25 && cache10 >= cache26 && cache10 >= cache27 && cache10 >= cache28) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23 && cache11 >= cache24 && cache11 >= cache25 && cache11 >= cache26 && cache11 >= cache27 && cache11 >= cache28) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23 && cache12 >= cache24 && cache12 >= cache25 && cache12 >= cache26 && cache12 >= cache27 && cache12 >= cache28) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23 && cache13 >= cache24 && cache13 >= cache25 && cache13 >= cache26 && cache13 >= cache27 && cache13 >= cache28) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23 && cache14 >= cache24 && cache14 >= cache25 && cache14 >= cache26 && cache14 >= cache27 && cache14 >= cache28) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23 && cache15 >= cache24 && cache15 >= cache25 && cache15 >= cache26 && cache15 >= cache27 && cache15 >= cache28) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23 && cache16 >= cache24 && cache16 >= cache25 && cache16 >= cache26 && cache16 >= cache27 && cache16 >= cache28) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23 && cache17 >= cache24 && cache17 >= cache25 && cache17 >= cache26 && cache17 >= cache27 && cache17 >= cache28) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23 && cache18 >= cache24 && cache18 >= cache25 && cache18 >= cache26 && cache18 >= cache27 && cache18 >= cache28) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23 && cache19 >= cache24 && cache19 >= cache25 && cache19 >= cache26 && cache19 >= cache27 && cache19 >= cache28) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23 && cache20 >= cache24 && cache20 >= cache25 && cache20 >= cache26 && cache20 >= cache27 && cache20 >= cache28) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23 && cache21 >= cache24 && cache21 >= cache25 && cache21 >= cache26 && cache21 >= cache27 && cache21 >= cache28) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23 && cache22 >= cache24 && cache22 >= cache25 && cache22 >= cache26 && cache22 >= cache27 && cache22 >= cache28) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else if (cache23 >= cache0 && cache23 >= cache1 && cache23 >= cache2 && cache23 >= cache3 && cache23 >= cache4 && cache23 >= cache5 && cache23 >= cache6 && cache23 >= cache7 && cache23 >= cache8 && cache23 >= cache9 && cache23 >= cache10 && cache23 >= cache11 && cache23 >= cache12 && cache23 >= cache13 && cache23 >= cache14 && cache23 >= cache15 && cache23 >= cache16 && cache23 >= cache17 && cache23 >= cache18 && cache23 >= cache19 && cache23 >= cache20 && cache23 >= cache21 && cache23 >= cache22 && cache23 >= cache24 && cache23 >= cache25 && cache23 >= cache26 && cache23 >= cache27 && cache23 >= cache28) {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		} else if (cache24 >= cache0 && cache24 >= cache1 && cache24 >= cache2 && cache24 >= cache3 && cache24 >= cache4 && cache24 >= cache5 && cache24 >= cache6 && cache24 >= cache7 && cache24 >= cache8 && cache24 >= cache9 && cache24 >= cache10 && cache24 >= cache11 && cache24 >= cache12 && cache24 >= cache13 && cache24 >= cache14 && cache24 >= cache15 && cache24 >= cache16 && cache24 >= cache17 && cache24 >= cache18 && cache24 >= cache19 && cache24 >= cache20 && cache24 >= cache21 && cache24 >= cache22 && cache24 >= cache23 && cache24 >= cache25 && cache24 >= cache26 && cache24 >= cache27 && cache24 >= cache28) {
			t->results[pos++] = cache24;
			cache24 = *++segments[24];
		} else if (cache25 >= cache0 && cache25 >= cache1 && cache25 >= cache2 && cache25 >= cache3 && cache25 >= cache4 && cache25 >= cache5 && cache25 >= cache6 && cache25 >= cache7 && cache25 >= cache8 && cache25 >= cache9 && cache25 >= cache10 && cache25 >= cache11 && cache25 >= cache12 && cache25 >= cache13 && cache25 >= cache14 && cache25 >= cache15 && cache25 >= cache16 && cache25 >= cache17 && cache25 >= cache18 && cache25 >= cache19 && cache25 >= cache20 && cache25 >= cache21 && cache25 >= cache22 && cache25 >= cache23 && cache25 >= cache24 && cache25 >= cache26 && cache25 >= cache27 && cache25 >= cache28) {
			t->results[pos++] = cache25;
			cache25 = *++segments[25];
		} else if (cache26 >= cache0 && cache26 >= cache1 && cache26 >= cache2 && cache26 >= cache3 && cache26 >= cache4 && cache26 >= cache5 && cache26 >= cache6 && cache26 >= cache7 && cache26 >= cache8 && cache26 >= cache9 && cache26 >= cache10 && cache26 >= cache11 && cache26 >= cache12 && cache26 >= cache13 && cache26 >= cache14 && cache26 >= cache15 && cache26 >= cache16 && cache26 >= cache17 && cache26 >= cache18 && cache26 >= cache19 && cache26 >= cache20 && cache26 >= cache21 && cache26 >= cache22 && cache26 >= cache23 && cache26 >= cache24 && cache26 >= cache25 && cache26 >= cache27 && cache26 >= cache28) {
			t->results[pos++] = cache26;
			cache26 = *++segments[26];
		} else if (cache27 >= cache0 && cache27 >= cache1 && cache27 >= cache2 && cache27 >= cache3 && cache27 >= cache4 && cache27 >= cache5 && cache27 >= cache6 && cache27 >= cache7 && cache27 >= cache8 && cache27 >= cache9 && cache27 >= cache10 && cache27 >= cache11 && cache27 >= cache12 && cache27 >= cache13 && cache27 >= cache14 && cache27 >= cache15 && cache27 >= cache16 && cache27 >= cache17 && cache27 >= cache18 && cache27 >= cache19 && cache27 >= cache20 && cache27 >= cache21 && cache27 >= cache22 && cache27 >= cache23 && cache27 >= cache24 && cache27 >= cache25 && cache27 >= cache26 && cache27 >= cache28) {
			t->results[pos++] = cache27;
			cache27 = *++segments[27];
		} else {
			t->results[pos++] = cache28;
			cache28 = *++segments[28];
		}
	}
}
static void merge_30(struct test *t, int **segments, int *cache) {
	int cache0 = cache[0];
	int cache1 = cache[1];
	int cache2 = cache[2];
	int cache3 = cache[3];
	int cache4 = cache[4];
	int cache5 = cache[5];
	int cache6 = cache[6];
	int cache7 = cache[7];
	int cache8 = cache[8];
	int cache9 = cache[9];
	int cache10 = cache[10];
	int cache11 = cache[11];
	int cache12 = cache[12];
	int cache13 = cache[13];
	int cache14 = cache[14];
	int cache15 = cache[15];
	int cache16 = cache[16];
	int cache17 = cache[17];
	int cache18 = cache[18];
	int cache19 = cache[19];
	int cache20 = cache[20];
	int cache21 = cache[21];
	int cache22 = cache[22];
	int cache23 = cache[23];
	int cache24 = cache[24];
	int cache25 = cache[25];
	int cache26 = cache[26];
	int cache27 = cache[27];
	int cache28 = cache[28];
	int cache29 = cache[29];
	size_t pos = 0;
	for (;;) {
		if (cache0 == 0 && cache1 == 0 && cache2 == 0 && cache3 == 0 && cache4 == 0 && cache5 == 0 && cache6 == 0 && cache7 == 0 && cache8 == 0 && cache9 == 0 && cache10 == 0 && cache11 == 0 && cache12 == 0 && cache13 == 0 && cache14 == 0 && cache15 == 0 && cache16 == 0 && cache17 == 0 && cache18 == 0 && cache19 == 0 && cache20 == 0 && cache21 == 0 && cache22 == 0 && cache23 == 0 && cache24 == 0 && cache25 == 0 && cache26 == 0 && cache27 == 0 && cache28 == 0 && cache29 == 0)
			break;

		if (cache0 >= cache1 && cache0 >= cache2 && cache0 >= cache3 && cache0 >= cache4 && cache0 >= cache5 && cache0 >= cache6 && cache0 >= cache7 && cache0 >= cache8 && cache0 >= cache9 && cache0 >= cache10 && cache0 >= cache11 && cache0 >= cache12 && cache0 >= cache13 && cache0 >= cache14 && cache0 >= cache15 && cache0 >= cache16 && cache0 >= cache17 && cache0 >= cache18 && cache0 >= cache19 && cache0 >= cache20 && cache0 >= cache21 && cache0 >= cache22 && cache0 >= cache23 && cache0 >= cache24 && cache0 >= cache25 && cache0 >= cache26 && cache0 >= cache27 && cache0 >= cache28 && cache0 >= cache29) {
			t->results[pos++] = cache0;
			cache0 = *++segments[0];
		} else if (cache1 >= cache0 && cache1 >= cache2 && cache1 >= cache3 && cache1 >= cache4 && cache1 >= cache5 && cache1 >= cache6 && cache1 >= cache7 && cache1 >= cache8 && cache1 >= cache9 && cache1 >= cache10 && cache1 >= cache11 && cache1 >= cache12 && cache1 >= cache13 && cache1 >= cache14 && cache1 >= cache15 && cache1 >= cache16 && cache1 >= cache17 && cache1 >= cache18 && cache1 >= cache19 && cache1 >= cache20 && cache1 >= cache21 && cache1 >= cache22 && cache1 >= cache23 && cache1 >= cache24 && cache1 >= cache25 && cache1 >= cache26 && cache1 >= cache27 && cache1 >= cache28 && cache1 >= cache29) {
			t->results[pos++] = cache1;
			cache1 = *++segments[1];
		} else if (cache2 >= cache0 && cache2 >= cache1 && cache2 >= cache3 && cache2 >= cache4 && cache2 >= cache5 && cache2 >= cache6 && cache2 >= cache7 && cache2 >= cache8 && cache2 >= cache9 && cache2 >= cache10 && cache2 >= cache11 && cache2 >= cache12 && cache2 >= cache13 && cache2 >= cache14 && cache2 >= cache15 && cache2 >= cache16 && cache2 >= cache17 && cache2 >= cache18 && cache2 >= cache19 && cache2 >= cache20 && cache2 >= cache21 && cache2 >= cache22 && cache2 >= cache23 && cache2 >= cache24 && cache2 >= cache25 && cache2 >= cache26 && cache2 >= cache27 && cache2 >= cache28 && cache2 >= cache29) {
			t->results[pos++] = cache2;
			cache2 = *++segments[2];
		} else if (cache3 >= cache0 && cache3 >= cache1 && cache3 >= cache2 && cache3 >= cache4 && cache3 >= cache5 && cache3 >= cache6 && cache3 >= cache7 && cache3 >= cache8 && cache3 >= cache9 && cache3 >= cache10 && cache3 >= cache11 && cache3 >= cache12 && cache3 >= cache13 && cache3 >= cache14 && cache3 >= cache15 && cache3 >= cache16 && cache3 >= cache17 && cache3 >= cache18 && cache3 >= cache19 && cache3 >= cache20 && cache3 >= cache21 && cache3 >= cache22 && cache3 >= cache23 && cache3 >= cache24 && cache3 >= cache25 && cache3 >= cache26 && cache3 >= cache27 && cache3 >= cache28 && cache3 >= cache29) {
			t->results[pos++] = cache3;
			cache3 = *++segments[3];
		} else if (cache4 >= cache0 && cache4 >= cache1 && cache4 >= cache2 && cache4 >= cache3 && cache4 >= cache5 && cache4 >= cache6 && cache4 >= cache7 && cache4 >= cache8 && cache4 >= cache9 && cache4 >= cache10 && cache4 >= cache11 && cache4 >= cache12 && cache4 >= cache13 && cache4 >= cache14 && cache4 >= cache15 && cache4 >= cache16 && cache4 >= cache17 && cache4 >= cache18 && cache4 >= cache19 && cache4 >= cache20 && cache4 >= cache21 && cache4 >= cache22 && cache4 >= cache23 && cache4 >= cache24 && cache4 >= cache25 && cache4 >= cache26 && cache4 >= cache27 && cache4 >= cache28 && cache4 >= cache29) {
			t->results[pos++] = cache4;
			cache4 = *++segments[4];
		} else if (cache5 >= cache0 && cache5 >= cache1 && cache5 >= cache2 && cache5 >= cache3 && cache5 >= cache4 && cache5 >= cache6 && cache5 >= cache7 && cache5 >= cache8 && cache5 >= cache9 && cache5 >= cache10 && cache5 >= cache11 && cache5 >= cache12 && cache5 >= cache13 && cache5 >= cache14 && cache5 >= cache15 && cache5 >= cache16 && cache5 >= cache17 && cache5 >= cache18 && cache5 >= cache19 && cache5 >= cache20 && cache5 >= cache21 && cache5 >= cache22 && cache5 >= cache23 && cache5 >= cache24 && cache5 >= cache25 && cache5 >= cache26 && cache5 >= cache27 && cache5 >= cache28 && cache5 >= cache29) {
			t->results[pos++] = cache5;
			cache5 = *++segments[5];
		} else if (cache6 >= cache0 && cache6 >= cache1 && cache6 >= cache2 && cache6 >= cache3 && cache6 >= cache4 && cache6 >= cache5 && cache6 >= cache7 && cache6 >= cache8 && cache6 >= cache9 && cache6 >= cache10 && cache6 >= cache11 && cache6 >= cache12 && cache6 >= cache13 && cache6 >= cache14 && cache6 >= cache15 && cache6 >= cache16 && cache6 >= cache17 && cache6 >= cache18 && cache6 >= cache19 && cache6 >= cache20 && cache6 >= cache21 && cache6 >= cache22 && cache6 >= cache23 && cache6 >= cache24 && cache6 >= cache25 && cache6 >= cache26 && cache6 >= cache27 && cache6 >= cache28 && cache6 >= cache29) {
			t->results[pos++] = cache6;
			cache6 = *++segments[6];
		} else if (cache7 >= cache0 && cache7 >= cache1 && cache7 >= cache2 && cache7 >= cache3 && cache7 >= cache4 && cache7 >= cache5 && cache7 >= cache6 && cache7 >= cache8 && cache7 >= cache9 && cache7 >= cache10 && cache7 >= cache11 && cache7 >= cache12 && cache7 >= cache13 && cache7 >= cache14 && cache7 >= cache15 && cache7 >= cache16 && cache7 >= cache17 && cache7 >= cache18 && cache7 >= cache19 && cache7 >= cache20 && cache7 >= cache21 && cache7 >= cache22 && cache7 >= cache23 && cache7 >= cache24 && cache7 >= cache25 && cache7 >= cache26 && cache7 >= cache27 && cache7 >= cache28 && cache7 >= cache29) {
			t->results[pos++] = cache7;
			cache7 = *++segments[7];
		} else if (cache8 >= cache0 && cache8 >= cache1 && cache8 >= cache2 && cache8 >= cache3 && cache8 >= cache4 && cache8 >= cache5 && cache8 >= cache6 && cache8 >= cache7 && cache8 >= cache9 && cache8 >= cache10 && cache8 >= cache11 && cache8 >= cache12 && cache8 >= cache13 && cache8 >= cache14 && cache8 >= cache15 && cache8 >= cache16 && cache8 >= cache17 && cache8 >= cache18 && cache8 >= cache19 && cache8 >= cache20 && cache8 >= cache21 && cache8 >= cache22 && cache8 >= cache23 && cache8 >= cache24 && cache8 >= cache25 && cache8 >= cache26 && cache8 >= cache27 && cache8 >= cache28 && cache8 >= cache29) {
			t->results[pos++] = cache8;
			cache8 = *++segments[8];
		} else if (cache9 >= cache0 && cache9 >= cache1 && cache9 >= cache2 && cache9 >= cache3 && cache9 >= cache4 && cache9 >= cache5 && cache9 >= cache6 && cache9 >= cache7 && cache9 >= cache8 && cache9 >= cache10 && cache9 >= cache11 && cache9 >= cache12 && cache9 >= cache13 && cache9 >= cache14 && cache9 >= cache15 && cache9 >= cache16 && cache9 >= cache17 && cache9 >= cache18 && cache9 >= cache19 && cache9 >= cache20 && cache9 >= cache21 && cache9 >= cache22 && cache9 >= cache23 && cache9 >= cache24 && cache9 >= cache25 && cache9 >= cache26 && cache9 >= cache27 && cache9 >= cache28 && cache9 >= cache29) {
			t->results[pos++] = cache9;
			cache9 = *++segments[9];
		} else if (cache10 >= cache0 && cache10 >= cache1 && cache10 >= cache2 && cache10 >= cache3 && cache10 >= cache4 && cache10 >= cache5 && cache10 >= cache6 && cache10 >= cache7 && cache10 >= cache8 && cache10 >= cache9 && cache10 >= cache11 && cache10 >= cache12 && cache10 >= cache13 && cache10 >= cache14 && cache10 >= cache15 && cache10 >= cache16 && cache10 >= cache17 && cache10 >= cache18 && cache10 >= cache19 && cache10 >= cache20 && cache10 >= cache21 && cache10 >= cache22 && cache10 >= cache23 && cache10 >= cache24 && cache10 >= cache25 && cache10 >= cache26 && cache10 >= cache27 && cache10 >= cache28 && cache10 >= cache29) {
			t->results[pos++] = cache10;
			cache10 = *++segments[10];
		} else if (cache11 >= cache0 && cache11 >= cache1 && cache11 >= cache2 && cache11 >= cache3 && cache11 >= cache4 && cache11 >= cache5 && cache11 >= cache6 && cache11 >= cache7 && cache11 >= cache8 && cache11 >= cache9 && cache11 >= cache10 && cache11 >= cache12 && cache11 >= cache13 && cache11 >= cache14 && cache11 >= cache15 && cache11 >= cache16 && cache11 >= cache17 && cache11 >= cache18 && cache11 >= cache19 && cache11 >= cache20 && cache11 >= cache21 && cache11 >= cache22 && cache11 >= cache23 && cache11 >= cache24 && cache11 >= cache25 && cache11 >= cache26 && cache11 >= cache27 && cache11 >= cache28 && cache11 >= cache29) {
			t->results[pos++] = cache11;
			cache11 = *++segments[11];
		} else if (cache12 >= cache0 && cache12 >= cache1 && cache12 >= cache2 && cache12 >= cache3 && cache12 >= cache4 && cache12 >= cache5 && cache12 >= cache6 && cache12 >= cache7 && cache12 >= cache8 && cache12 >= cache9 && cache12 >= cache10 && cache12 >= cache11 && cache12 >= cache13 && cache12 >= cache14 && cache12 >= cache15 && cache12 >= cache16 && cache12 >= cache17 && cache12 >= cache18 && cache12 >= cache19 && cache12 >= cache20 && cache12 >= cache21 && cache12 >= cache22 && cache12 >= cache23 && cache12 >= cache24 && cache12 >= cache25 && cache12 >= cache26 && cache12 >= cache27 && cache12 >= cache28 && cache12 >= cache29) {
			t->results[pos++] = cache12;
			cache12 = *++segments[12];
		} else if (cache13 >= cache0 && cache13 >= cache1 && cache13 >= cache2 && cache13 >= cache3 && cache13 >= cache4 && cache13 >= cache5 && cache13 >= cache6 && cache13 >= cache7 && cache13 >= cache8 && cache13 >= cache9 && cache13 >= cache10 && cache13 >= cache11 && cache13 >= cache12 && cache13 >= cache14 && cache13 >= cache15 && cache13 >= cache16 && cache13 >= cache17 && cache13 >= cache18 && cache13 >= cache19 && cache13 >= cache20 && cache13 >= cache21 && cache13 >= cache22 && cache13 >= cache23 && cache13 >= cache24 && cache13 >= cache25 && cache13 >= cache26 && cache13 >= cache27 && cache13 >= cache28 && cache13 >= cache29) {
			t->results[pos++] = cache13;
			cache13 = *++segments[13];
		} else if (cache14 >= cache0 && cache14 >= cache1 && cache14 >= cache2 && cache14 >= cache3 && cache14 >= cache4 && cache14 >= cache5 && cache14 >= cache6 && cache14 >= cache7 && cache14 >= cache8 && cache14 >= cache9 && cache14 >= cache10 && cache14 >= cache11 && cache14 >= cache12 && cache14 >= cache13 && cache14 >= cache15 && cache14 >= cache16 && cache14 >= cache17 && cache14 >= cache18 && cache14 >= cache19 && cache14 >= cache20 && cache14 >= cache21 && cache14 >= cache22 && cache14 >= cache23 && cache14 >= cache24 && cache14 >= cache25 && cache14 >= cache26 && cache14 >= cache27 && cache14 >= cache28 && cache14 >= cache29) {
			t->results[pos++] = cache14;
			cache14 = *++segments[14];
		} else if (cache15 >= cache0 && cache15 >= cache1 && cache15 >= cache2 && cache15 >= cache3 && cache15 >= cache4 && cache15 >= cache5 && cache15 >= cache6 && cache15 >= cache7 && cache15 >= cache8 && cache15 >= cache9 && cache15 >= cache10 && cache15 >= cache11 && cache15 >= cache12 && cache15 >= cache13 && cache15 >= cache14 && cache15 >= cache16 && cache15 >= cache17 && cache15 >= cache18 && cache15 >= cache19 && cache15 >= cache20 && cache15 >= cache21 && cache15 >= cache22 && cache15 >= cache23 && cache15 >= cache24 && cache15 >= cache25 && cache15 >= cache26 && cache15 >= cache27 && cache15 >= cache28 && cache15 >= cache29) {
			t->results[pos++] = cache15;
			cache15 = *++segments[15];
		} else if (cache16 >= cache0 && cache16 >= cache1 && cache16 >= cache2 && cache16 >= cache3 && cache16 >= cache4 && cache16 >= cache5 && cache16 >= cache6 && cache16 >= cache7 && cache16 >= cache8 && cache16 >= cache9 && cache16 >= cache10 && cache16 >= cache11 && cache16 >= cache12 && cache16 >= cache13 && cache16 >= cache14 && cache16 >= cache15 && cache16 >= cache17 && cache16 >= cache18 && cache16 >= cache19 && cache16 >= cache20 && cache16 >= cache21 && cache16 >= cache22 && cache16 >= cache23 && cache16 >= cache24 && cache16 >= cache25 && cache16 >= cache26 && cache16 >= cache27 && cache16 >= cache28 && cache16 >= cache29) {
			t->results[pos++] = cache16;
			cache16 = *++segments[16];
		} else if (cache17 >= cache0 && cache17 >= cache1 && cache17 >= cache2 && cache17 >= cache3 && cache17 >= cache4 && cache17 >= cache5 && cache17 >= cache6 && cache17 >= cache7 && cache17 >= cache8 && cache17 >= cache9 && cache17 >= cache10 && cache17 >= cache11 && cache17 >= cache12 && cache17 >= cache13 && cache17 >= cache14 && cache17 >= cache15 && cache17 >= cache16 && cache17 >= cache18 && cache17 >= cache19 && cache17 >= cache20 && cache17 >= cache21 && cache17 >= cache22 && cache17 >= cache23 && cache17 >= cache24 && cache17 >= cache25 && cache17 >= cache26 && cache17 >= cache27 && cache17 >= cache28 && cache17 >= cache29) {
			t->results[pos++] = cache17;
			cache17 = *++segments[17];
		} else if (cache18 >= cache0 && cache18 >= cache1 && cache18 >= cache2 && cache18 >= cache3 && cache18 >= cache4 && cache18 >= cache5 && cache18 >= cache6 && cache18 >= cache7 && cache18 >= cache8 && cache18 >= cache9 && cache18 >= cache10 && cache18 >= cache11 && cache18 >= cache12 && cache18 >= cache13 && cache18 >= cache14 && cache18 >= cache15 && cache18 >= cache16 && cache18 >= cache17 && cache18 >= cache19 && cache18 >= cache20 && cache18 >= cache21 && cache18 >= cache22 && cache18 >= cache23 && cache18 >= cache24 && cache18 >= cache25 && cache18 >= cache26 && cache18 >= cache27 && cache18 >= cache28 && cache18 >= cache29) {
			t->results[pos++] = cache18;
			cache18 = *++segments[18];
		} else if (cache19 >= cache0 && cache19 >= cache1 && cache19 >= cache2 && cache19 >= cache3 && cache19 >= cache4 && cache19 >= cache5 && cache19 >= cache6 && cache19 >= cache7 && cache19 >= cache8 && cache19 >= cache9 && cache19 >= cache10 && cache19 >= cache11 && cache19 >= cache12 && cache19 >= cache13 && cache19 >= cache14 && cache19 >= cache15 && cache19 >= cache16 && cache19 >= cache17 && cache19 >= cache18 && cache19 >= cache20 && cache19 >= cache21 && cache19 >= cache22 && cache19 >= cache23 && cache19 >= cache24 && cache19 >= cache25 && cache19 >= cache26 && cache19 >= cache27 && cache19 >= cache28 && cache19 >= cache29) {
			t->results[pos++] = cache19;
			cache19 = *++segments[19];
		} else if (cache20 >= cache0 && cache20 >= cache1 && cache20 >= cache2 && cache20 >= cache3 && cache20 >= cache4 && cache20 >= cache5 && cache20 >= cache6 && cache20 >= cache7 && cache20 >= cache8 && cache20 >= cache9 && cache20 >= cache10 && cache20 >= cache11 && cache20 >= cache12 && cache20 >= cache13 && cache20 >= cache14 && cache20 >= cache15 && cache20 >= cache16 && cache20 >= cache17 && cache20 >= cache18 && cache20 >= cache19 && cache20 >= cache21 && cache20 >= cache22 && cache20 >= cache23 && cache20 >= cache24 && cache20 >= cache25 && cache20 >= cache26 && cache20 >= cache27 && cache20 >= cache28 && cache20 >= cache29) {
			t->results[pos++] = cache20;
			cache20 = *++segments[20];
		} else if (cache21 >= cache0 && cache21 >= cache1 && cache21 >= cache2 && cache21 >= cache3 && cache21 >= cache4 && cache21 >= cache5 && cache21 >= cache6 && cache21 >= cache7 && cache21 >= cache8 && cache21 >= cache9 && cache21 >= cache10 && cache21 >= cache11 && cache21 >= cache12 && cache21 >= cache13 && cache21 >= cache14 && cache21 >= cache15 && cache21 >= cache16 && cache21 >= cache17 && cache21 >= cache18 && cache21 >= cache19 && cache21 >= cache20 && cache21 >= cache22 && cache21 >= cache23 && cache21 >= cache24 && cache21 >= cache25 && cache21 >= cache26 && cache21 >= cache27 && cache21 >= cache28 && cache21 >= cache29) {
			t->results[pos++] = cache21;
			cache21 = *++segments[21];
		} else if (cache22 >= cache0 && cache22 >= cache1 && cache22 >= cache2 && cache22 >= cache3 && cache22 >= cache4 && cache22 >= cache5 && cache22 >= cache6 && cache22 >= cache7 && cache22 >= cache8 && cache22 >= cache9 && cache22 >= cache10 && cache22 >= cache11 && cache22 >= cache12 && cache22 >= cache13 && cache22 >= cache14 && cache22 >= cache15 && cache22 >= cache16 && cache22 >= cache17 && cache22 >= cache18 && cache22 >= cache19 && cache22 >= cache20 && cache22 >= cache21 && cache22 >= cache23 && cache22 >= cache24 && cache22 >= cache25 && cache22 >= cache26 && cache22 >= cache27 && cache22 >= cache28 && cache22 >= cache29) {
			t->results[pos++] = cache22;
			cache22 = *++segments[22];
		} else if (cache23 >= cache0 && cache23 >= cache1 && cache23 >= cache2 && cache23 >= cache3 && cache23 >= cache4 && cache23 >= cache5 && cache23 >= cache6 && cache23 >= cache7 && cache23 >= cache8 && cache23 >= cache9 && cache23 >= cache10 && cache23 >= cache11 && cache23 >= cache12 && cache23 >= cache13 && cache23 >= cache14 && cache23 >= cache15 && cache23 >= cache16 && cache23 >= cache17 && cache23 >= cache18 && cache23 >= cache19 && cache23 >= cache20 && cache23 >= cache21 && cache23 >= cache22 && cache23 >= cache24 && cache23 >= cache25 && cache23 >= cache26 && cache23 >= cache27 && cache23 >= cache28 && cache23 >= cache29) {
			t->results[pos++] = cache23;
			cache23 = *++segments[23];
		} else if (cache24 >= cache0 && cache24 >= cache1 && cache24 >= cache2 && cache24 >= cache3 && cache24 >= cache4 && cache24 >= cache5 && cache24 >= cache6 && cache24 >= cache7 && cache24 >= cache8 && cache24 >= cache9 && cache24 >= cache10 && cache24 >= cache11 && cache24 >= cache12 && cache24 >= cache13 && cache24 >= cache14 && cache24 >= cache15 && cache24 >= cache16 && cache24 >= cache17 && cache24 >= cache18 && cache24 >= cache19 && cache24 >= cache20 && cache24 >= cache21 && cache24 >= cache22 && cache24 >= cache23 && cache24 >= cache25 && cache24 >= cache26 && cache24 >= cache27 && cache24 >= cache28 && cache24 >= cache29) {
			t->results[pos++] = cache24;
			cache24 = *++segments[24];
		} else if (cache25 >= cache0 && cache25 >= cache1 && cache25 >= cache2 && cache25 >= cache3 && cache25 >= cache4 && cache25 >= cache5 && cache25 >= cache6 && cache25 >= cache7 && cache25 >= cache8 && cache25 >= cache9 && cache25 >= cache10 && cache25 >= cache11 && cache25 >= cache12 && cache25 >= cache13 && cache25 >= cache14 && cache25 >= cache15 && cache25 >= cache16 && cache25 >= cache17 && cache25 >= cache18 && cache25 >= cache19 && cache25 >= cache20 && cache25 >= cache21 && cache25 >= cache22 && cache25 >= cache23 && cache25 >= cache24 && cache25 >= cache26 && cache25 >= cache27 && cache25 >= cache28 && cache25 >= cache29) {
			t->results[pos++] = cache25;
			cache25 = *++segments[25];
		} else if (cache26 >= cache0 && cache26 >= cache1 && cache26 >= cache2 && cache26 >= cache3 && cache26 >= cache4 && cache26 >= cache5 && cache26 >= cache6 && cache26 >= cache7 && cache26 >= cache8 && cache26 >= cache9 && cache26 >= cache10 && cache26 >= cache11 && cache26 >= cache12 && cache26 >= cache13 && cache26 >= cache14 && cache26 >= cache15 && cache26 >= cache16 && cache26 >= cache17 && cache26 >= cache18 && cache26 >= cache19 && cache26 >= cache20 && cache26 >= cache21 && cache26 >= cache22 && cache26 >= cache23 && cache26 >= cache24 && cache26 >= cache25 && cache26 >= cache27 && cache26 >= cache28 && cache26 >= cache29) {
			t->results[pos++] = cache26;
			cache26 = *++segments[26];
		} else if (cache27 >= cache0 && cache27 >= cache1 && cache27 >= cache2 && cache27 >= cache3 && cache27 >= cache4 && cache27 >= cache5 && cache27 >= cache6 && cache27 >= cache7 && cache27 >= cache8 && cache27 >= cache9 && cache27 >= cache10 && cache27 >= cache11 && cache27 >= cache12 && cache27 >= cache13 && cache27 >= cache14 && cache27 >= cache15 && cache27 >= cache16 && cache27 >= cache17 && cache27 >= cache18 && cache27 >= cache19 && cache27 >= cache20 && cache27 >= cache21 && cache27 >= cache22 && cache27 >= cache23 && cache27 >= cache24 && cache27 >= cache25 && cache27 >= cache26 && cache27 >= cache28 && cache27 >= cache29) {
			t->results[pos++] = cache27;
			cache27 = *++segments[27];
		} else if (cache28 >= cache0 && cache28 >= cache1 && cache28 >= cache2 && cache28 >= cache3 && cache28 >= cache4 && cache28 >= cache5 && cache28 >= cache6 && cache28 >= cache7 && cache28 >= cache8 && cache28 >= cache9 && cache28 >= cache10 && cache28 >= cache11 && cache28 >= cache12 && cache28 >= cache13 && cache28 >= cache14 && cache28 >= cache15 && cache28 >= cache16 && cache28 >= cache17 && cache28 >= cache18 && cache28 >= cache19 && cache28 >= cache20 && cache28 >= cache21 && cache28 >= cache22 && cache28 >= cache23 && cache28 >= cache24 && cache28 >= cache25 && cache28 >= cache26 && cache28 >= cache27 && cache28 >= cache29) {
			t->results[pos++] = cache28;
			cache28 = *++segments[28];
		} else {
			t->results[pos++] = cache29;
			cache29 = *++segments[29];
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
