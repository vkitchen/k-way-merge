#pragma once

#include "merge.h"

class MergeHeap4aryBranchlessParallel : public Merge {
	public:
		MergeHeap4aryBranchlessParallel() {
			name = "Heap 4ary Branchless Parallel";
		}
		bool merge(struct test *t, int n) override;
};
