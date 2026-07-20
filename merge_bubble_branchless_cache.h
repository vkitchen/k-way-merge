#pragma once

#include "merge.h"

class MergeBubbleBranchlessCache : public Merge {
	public:
		MergeBubbleBranchlessCache() {
			name = "Bubble Branchless Cache";
		}
		bool merge(struct test *t, int n) override;
};
