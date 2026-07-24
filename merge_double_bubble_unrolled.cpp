// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_double_bubble_unrolled.h"

static void sort_full(int **a, int length) {
	for (int i = length; i > 1; i--) {
		int *min = a[0];
		for (int j = 1; j < i; j++) {
			int *y = a[j];
			a[j - 1] = (*min >= *y ? min : y);
			min = (*min >= *y ? y : min);
		}
		a[i - 1] = min;
	}
}

static void sort_partial(int **a, int length) {
	int *x = a[0];
	int *y = a[1];
	if (*y > *x) std::swap(x, y);
	for (int j = 2; j < length; j++) {
		int *z = a[j];
		bool is_smaller = *z > *y;
		int *w = is_smaller ? z : y;
		y = is_smaller ? y : z;
		is_smaller = *z > *x;
		a[j - 2] = is_smaller ? z : x;
		x = is_smaller ? x : w;
	}
	a[length - 2] = x;
	a[length - 1] = y;
}

bool MergeDoubleBubbleUnrolled::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	if (n == 3) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 3);
		}
	} else if (n == 4) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 4);
		}
	} else if (n == 5) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 5);
		}
	} else if (n == 6) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 6);
		}
	} else if (n == 7) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 7);
		}
	} else if (n == 8) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 8);
		}
	} else if (n == 9) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 9);
		}
	} else if (n == 10) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 10);
		}
	} else if (n == 11) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 11);
		}
	} else if (n == 12) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 12);
		}
	} else if (n == 13) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 13);
		}
	} else if (n == 14) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 14);
		}
	} else if (n == 15) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 15);
		}
	} else if (n == 16) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 16);
		}
	} else if (n == 17) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 17);
		}
	} else if (n == 18) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 18);
		}
	} else if (n == 19) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 19);
		}
	} else if (n == 20) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 20);
		}
	} else if (n == 21) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 21);
		}
	} else if (n == 22) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 22);
		}
	} else if (n == 23) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 23);
		}
	} else if (n == 24) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 24);
		}
	} else if (n == 25) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 25);
		}
	} else if (n == 26) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 26);
		}
	} else if (n == 27) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 27);
		}
	} else if (n == 28) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 28);
		}
	} else if (n == 29) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 29);
		}
	} else if (n == 30) {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, 30);
		}
	} else {
		// process
		size_t pos = 0;
		for (;;) {
			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			if (*segments[0] < *segments[1]) std::swap(segments[0], segments[1]);

			if (*segments[0] == 0)
				break;

			t->results[pos++] = *segments[0]++;

			sort_partial(segments, n);
		}
	}

	free(segments);

	return true;
}
