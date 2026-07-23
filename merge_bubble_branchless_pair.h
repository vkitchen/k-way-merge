#pragma once

#include "merge.h"

class MergeBubbleBranchlessPair : public Merge {
	public:
		MergeBubbleBranchlessPair() {
			name = "Bubble Branchless Pair";
		}
		bool merge(struct test *t, int n) override;
};
