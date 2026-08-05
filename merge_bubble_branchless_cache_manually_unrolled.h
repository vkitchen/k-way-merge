#pragma once

#include "merge.h"

class MergeBubbleBranchlessCacheManuallyUnrolled : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolled() {
			name = "Bubble Branchless Cache Manually Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
