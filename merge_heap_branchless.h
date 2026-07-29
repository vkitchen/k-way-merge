#pragma once

#include "merge.h"

class MergeHeapBranchless : public Merge {
	public:
		MergeHeapBranchless() {
			name = "Heap Branchless";
		}
		bool merge(struct test *t, int n) override;
};
