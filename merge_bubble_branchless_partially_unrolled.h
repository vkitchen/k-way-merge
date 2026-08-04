#pragma once

#include "merge.h"

class MergeBubbleBranchlessPartiallyUnrolled : public Merge {
	public:
		MergeBubbleBranchlessPartiallyUnrolled() {
			name = "Bubble Branchless Partially Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
