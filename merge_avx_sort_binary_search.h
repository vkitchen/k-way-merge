#pragma once

#include "merge.h"

class MergeAvxSortBinarySearch : public Merge {
	public:
		MergeAvxSortBinarySearch() {
			name = "AVX Sort Binary Search";
		}
		bool merge(struct test *t, int n) override;
};
