#pragma once

#include "merge.h"

class MergeHeapBranchlessPair : public Merge {
	public:
		MergeHeapBranchlessPair() {
			name = "Heap Branchless Pair";
		}
		bool merge(struct test *t, int n) override;
};
