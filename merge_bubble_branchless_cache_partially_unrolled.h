#pragma once

#include "merge.h"

class MergeBubbleBranchlessCachePartiallyUnrolled : public Merge {
	public:
		MergeBubbleBranchlessCachePartiallyUnrolled() {
			name = "Bubble Branchless Cache Partially Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
