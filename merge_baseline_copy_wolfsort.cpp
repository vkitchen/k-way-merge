#include <string.h>

#include "wolfsort.h"

#include "harness.h"

#include "merge_baseline_copy_wolfsort.h"

bool MergeBaselineCopyWolfSort::merge(struct test *t, int n) {
	for (int i = 0; i < n; i++)
		memcpy(&t->results[i * t->length], t->postings[i], sizeof(int) * t->length);

	wolfsort_int32(t->results, n * t->length, NULL);

	return true;
}
