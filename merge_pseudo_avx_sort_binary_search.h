#pragma once

#include "merge.h"

class MergePseudoAvxSortBinarySearch : public Merge {
	public:
		MergePseudoAvxSortBinarySearch() {
			name = "Pseudo AVX Sort (Binary Search)";
		}
		bool merge(struct test *t, int n) override;
};
