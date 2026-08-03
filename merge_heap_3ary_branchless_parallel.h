#pragma once

#include "merge.h"

class MergeHeap3aryBranchlessParallel : public Merge {
	public:
		MergeHeap3aryBranchlessParallel() {
			name = "Heap 3ary Branchless Parallel";
		}
		bool merge(struct test *t, int n) override;
};
