#pragma once

#include "merge.h"

class MergeHeapBranchlessParallelEarlyTerminate : public Merge {
	public:
		MergeHeapBranchlessParallelEarlyTerminate() {
			name = "Heap Branchless Parallel Early Terminate";
		}
		bool merge(struct test *t, int n) override;
};
