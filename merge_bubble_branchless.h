#pragma once

#include "merge.h"

class MergeBubbleBranchless : public Merge {
	public:
		MergeBubbleBranchless() {
			name = "Bubble Branchless";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessO1 : public Merge {
	public:
		MergeBubbleBranchlessO1() {
			name = "Bubble Branchless (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessO2 : public Merge {
	public:
		MergeBubbleBranchlessO2() {
			name = "Bubble Branchless (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessO3 : public Merge {
	public:
		MergeBubbleBranchlessO3() {
			name = "Bubble Branchless (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessOs : public Merge {
	public:
		MergeBubbleBranchlessOs() {
			name = "Bubble Branchless (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeBubbleBranchlessOz : public Merge {
	public:
		MergeBubbleBranchlessOz() {
			name = "Bubble Branchless (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
