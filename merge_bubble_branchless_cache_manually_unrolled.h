#pragma once

#include "merge.h"

class MergeBubbleBranchlessCacheManuallyUnrolled : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolled() {
			name = "Bubble Branchless Cache Manually Unrolled";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheManuallyUnrolledO1 : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolledO1() {
			name = "Bubble Branchless Cache Manually Unrolled (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheManuallyUnrolledO2 : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolledO2() {
			name = "Bubble Branchless Cache Manually Unrolled (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheManuallyUnrolledO3 : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolledO3() {
			name = "Bubble Branchless Cache Manually Unrolled (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheManuallyUnrolledOs : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolledOs() {
			name = "Bubble Branchless Cache Manually Unrolled (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessCacheManuallyUnrolledOz : public Merge {
	public:
		MergeBubbleBranchlessCacheManuallyUnrolledOz() {
			name = "Bubble Branchless Cache Manually Unrolled (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
