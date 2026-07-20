#pragma once

#include "merge.h"

class MergeBubbleBranchless : public Merge {
	public:
		MergeBubbleBranchless() {
			name = "Bubble Branchless";
		}
		bool merge(struct test *t, int n) override;
};
