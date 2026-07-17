#include <string.h>

#include <algorithm>
#include <functional>

#include "harness.h"

#include "merge_baseline_copy_sort.h"

bool MergeBaselineCopySortO2::merge(struct test *t, int n) {
	for (int i = 0; i < n; i++)
		memcpy(&t->results[i * t->length], t->postings[i], sizeof(int) * t->length);

	std::sort(t->results, t->results + n * t->length, std::greater<int>());

	return true;
}
