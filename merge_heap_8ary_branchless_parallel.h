#pragma once

#include "merge.h"

class MergeHeap8aryBranchlessParallel : public Merge {
	public:
		MergeHeap8aryBranchlessParallel() {
			name = "Heap 8ary Branchless Parallel";
		}
		bool merge(struct test *t, int n) override;
};
