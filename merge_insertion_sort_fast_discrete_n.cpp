#include "harness.h"

static void sort_full(int **a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		int *x = a[i];
		for (j = i - 1; j >= 0 && *a[j] < *x; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

static void sort_partial_3(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 2 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_4(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 3 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_5(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 4 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_6(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 5 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_7(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 6 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_8(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 7 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_9(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 8 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_10(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 9 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_11(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 10 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_12(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 11 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_13(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 12 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_14(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 13 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_15(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 14 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

static void sort_partial_16(int **a) {
	int i;
	int *x = a[0];
	for (i = 0; i < 15 && *a[i+1] > *x; i++)
		a[i] = a[i+1];
	a[i] = x;
}

bool merge_insertion_sort_fast_discrete_n(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	// process
	size_t pos = 0;

	if (n == 3) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_3(segments);
		}
	} else if (n == 4) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_4(segments);
		}
	} else if (n == 5) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_5(segments);
		}
	} else if (n == 6) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_6(segments);
		}
	} else if (n == 7) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_7(segments);
		}
	} else if (n == 8) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_8(segments);
		}
	} else if (n == 9) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_9(segments);
		}
	} else if (n == 10) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_10(segments);
		}
	} else if (n == 11) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_11(segments);
		}
	} else if (n == 12) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_12(segments);
		}
	} else if (n == 13) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_13(segments);
		}
	} else if (n == 14) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_14(segments);
		}
	} else if (n == 15) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_15(segments);
		}
	} else if (n == 16) {
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial_16(segments);
		}
	}

	free(segments);

	return true;
}
