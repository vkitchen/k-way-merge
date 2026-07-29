#pragma once

#include "merge.h"

class MergeHeapBranchlessParallel : public Merge {
	public:
		MergeHeapBranchlessParallel() {
			name = "Heap Branchless Parallel";
		}
		bool merge(struct test *t, int n) override;
};
