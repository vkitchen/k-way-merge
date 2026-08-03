#pragma once

#include "merge.h"

class MergeHeap8aryBranchlessParallelSimd : public Merge {
	public:
		MergeHeap8aryBranchlessParallelSimd() {
			name = "Heap 8ary Branchless Parallel Simd";
		}
		bool merge(struct test *t, int n) override;
};
