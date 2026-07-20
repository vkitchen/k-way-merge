#pragma once

#include "merge.h"

class MergeBubbleBranchlessUnrolledCache : public Merge {
	public:
		MergeBubbleBranchlessUnrolledCache() {
			name = "Bubble Branchless Unrolled Cache";
		}
		bool merge(struct test *t, int n) override;
};
