#pragma once

#include "merge.h"

class MergeFindBranchlessCacheUnrolled : public Merge {
	public:
		MergeFindBranchlessCacheUnrolled() {
			name = "Find Branchless Cache Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
