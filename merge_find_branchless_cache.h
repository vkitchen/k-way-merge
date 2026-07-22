#pragma once

#include "merge.h"

class MergeFindBranchlessCache : public Merge {
	public:
		MergeFindBranchlessCache() {
			name = "Find Branchless Cache";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindBranchlessCacheO1 : public Merge {
	public:
		MergeFindBranchlessCacheO1() {
			name = "Find Branchless Cache (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindBranchlessCacheO2 : public Merge {
	public:
		MergeFindBranchlessCacheO2() {
			name = "Find Branchless Cache (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindBranchlessCacheO3 : public Merge {
	public:
		MergeFindBranchlessCacheO3() {
			name = "Find Branchless Cache (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindBranchlessCacheOs : public Merge {
	public:
		MergeFindBranchlessCacheOs() {
			name = "Find Branchless Cache (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindBranchlessCacheOz : public Merge {
	public:
		MergeFindBranchlessCacheOz() {
			name = "Find Branchless Cache (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
