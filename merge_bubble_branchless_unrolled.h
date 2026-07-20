#pragma once

#include "merge.h"

class MergeBubbleBranchlessUnrolled : public Merge {
	public:
		MergeBubbleBranchlessUnrolled() {
			name = "Bubble Branchless Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
