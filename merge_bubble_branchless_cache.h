#pragma once

#include "merge.h"

class MergeBubbleBranchlessCache : public Merge {
	public:
		MergeBubbleBranchlessCache() {
			name = "Bubble Branchless Cache";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheO1 : public Merge {
	public:
		MergeBubbleBranchlessCacheO1() {
			name = "Bubble Branchless Cache (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheO2 : public Merge {
	public:
		MergeBubbleBranchlessCacheO2() {
			name = "Bubble Branchless Cache (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheO3 : public Merge {
	public:
		MergeBubbleBranchlessCacheO3() {
			name = "Bubble Branchless Cache (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheOs : public Merge {
	public:
		MergeBubbleBranchlessCacheOs() {
			name = "Bubble Branchless Cache (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheOz : public Merge {
	public:
		MergeBubbleBranchlessCacheOz() {
			name = "Bubble Branchless Cache (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
