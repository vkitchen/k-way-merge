// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_bubble_branchless_manually_unrolled.h"

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

[[gnu::noinline]] static void merge_3(struct test *t, int **segments) {
	size_t pos = 0;
	int *segments0 = segments[0];
	int *segments1 = segments[1];
	int *segments2 = segments[2];

	for (;;) {
		if (*segments0 == 0)
			break;

		t->results[pos++] = *segments0++;

		int *min = segments0;

		int *cmp = segments1;
		segments0 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments2;
		segments1 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		segments2 = min;
	}
}

[[gnu::noinline]] static void merge_4(struct test *t, int **segments) {
	size_t pos = 0;
	int *segments0 = segments[0];
	int *segments1 = segments[1];
	int *segments2 = segments[2];
	int *segments3 = segments[3];

	for (;;) {
		if (*segments0 == 0)
			break;

		t->results[pos++] = *segments0++;

		int *min = segments0;

		int *cmp = segments1;
		segments0 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments2;
		segments1 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments3;
		segments2 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		segments3 = min;
	}
}

[[gnu::noinline]] static void merge_5(struct test *t, int **segments) {
	size_t pos = 0;
	int *segments0 = segments[0];
	int *segments1 = segments[1];
	int *segments2 = segments[2];
	int *segments3 = segments[3];
	int *segments4 = segments[4];

	for (;;) {
		if (*segments0 == 0)
			break;

		t->results[pos++] = *segments0++;

		int *min = segments0;

		int *cmp = segments1;
		segments0 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments2;
		segments1 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments3;
		segments2 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments4;
		segments3 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		segments4 = min;
	}
}

[[gnu::noinline]] static void merge_6(struct test *t, int **segments) {
	size_t pos = 0;
	int *segments0 = segments[0];
	int *segments1 = segments[1];
	int *segments2 = segments[2];
	int *segments3 = segments[3];
	int *segments4 = segments[4];
	int *segments5 = segments[5];

	for (;;) {
		if (*segments0 == 0)
			break;

		t->results[pos++] = *segments0++;

		int *min = segments0;

		int *cmp = segments1;
		segments0 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments2;
		segments1 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments3;
		segments2 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments4;
		segments3 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		cmp = segments5;
		segments4 = (*min >= *cmp ? min : cmp);
		min = (*min >= *cmp ? cmp : min);

		segments5 = min;
	}
}

bool MergeBubbleBranchlessManuallyUnrolled::merge(struct test *t, int n) {
	if (n > 6) return false;

	int **segments = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	sort_full(segments, n);

	// process
	if (n == 3) merge_3(t, segments);
	if (n == 4) merge_4(t, segments);
	if (n == 5) merge_5(t, segments);
	if (n == 6) merge_6(t, segments);

	free(segments);

	return true;
}
