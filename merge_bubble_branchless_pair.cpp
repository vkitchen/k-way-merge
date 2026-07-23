// https://blog.reverberate.org/2020/05/29/hoares-rebuttal-bubble-sorts-comeback.html

#include "harness.h"

#include "merge_bubble_branchless_pair.h"

static void sort_full(std::pair<int, int *>*a, int length) {
	int i, j;
	for (i = 1; i < length; i++) {
		std::pair<int, int *>x = a[i];
		for (j = i - 1; j >= 0 && a[j].first < x.first; j--)
			a[j+1] = a[j];
		a[j+1] = x;
	}
}

static void sort_partial(std::pair<int, int *>*a, int length) {
	auto min = a[0];
	for (int j = 1; j < length; j++) {
		auto y = a[j];
		a[j - 1] = (min.first >= y.first ? min : y);
		min = (min.first >= y.first ? y : min);
	}
	a[length - 1] = min;
}

bool MergeBubbleBranchlessPair::merge(struct test *t, int n) {
	std::pair<int, int *>*segments = (std::pair<int, int *>*)malloc(sizeof(std::pair<int, int *>) * n);

	for (int i = 0; i < n; i++)
		segments[i] = std::pair<int, int *>(*t->postings[i], t->postings[i]);

	sort_full(segments, n);

	// process
	size_t pos = 0;
	for (;;) {
		if (segments[0].first == 0)
			break;

		t->results[pos++] = segments[0].first;
		segments[0].second++;
		segments[0].first = *segments[0].second;

		sort_partial(segments, n);
	}

	free(segments);

	return true;
}
