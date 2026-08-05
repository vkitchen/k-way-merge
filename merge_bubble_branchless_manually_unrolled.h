#pragma once

#include "merge.h"

class MergeBubbleBranchlessManuallyUnrolled : public Merge {
	public:
		MergeBubbleBranchlessManuallyUnrolled() {
			name = "Bubble Branchless Manually Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
