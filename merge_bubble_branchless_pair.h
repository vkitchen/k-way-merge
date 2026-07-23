#pragma once

#include "merge.h"

class MergeBubbleBranchlessPair : public Merge {
	public:
		MergeBubbleBranchlessPair() {
			name = "Bubble Branchless Pair";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessPairO1 : public Merge {
	public:
		MergeBubbleBranchlessPairO1() {
			name = "Bubble Branchless Pair (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessPairO2 : public Merge {
	public:
		MergeBubbleBranchlessPairO2() {
			name = "Bubble Branchless Pair (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessPairO3 : public Merge {
	public:
		MergeBubbleBranchlessPairO3() {
			name = "Bubble Branchless Pair (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessPairOs : public Merge {
	public:
		MergeBubbleBranchlessPairOs() {
			name = "Bubble Branchless Pair (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessPairOz : public Merge {
	public:
		MergeBubbleBranchlessPairOz() {
			name = "Bubble Branchless Pair (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
