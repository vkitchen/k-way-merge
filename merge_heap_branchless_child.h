#pragma once

#include "merge.h"

class MergeHeapBranchlessChild : public Merge {
	public:
		MergeHeapBranchlessChild() {
			name = "Heap Branchless Child";
		}
		bool merge(struct test *t, int n) override;
};
