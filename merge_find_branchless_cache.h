#pragma once

#include "merge.h"

class MergeFindBranchlessCache : public Merge {
	public:
		MergeFindBranchlessCache() {
			name = "Find Branchless Cache";
		}
		bool merge(struct test *t, int n) override;
};
