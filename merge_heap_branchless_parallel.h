#pragma once

#include "merge.h"

class MergeHeapBranchlessParallel : public Merge {
	public:
		MergeHeapBranchlessParallel() {
			name = "Heap Branchless Parallel";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapBranchlessParallelO1 : public Merge {
	public:
		MergeHeapBranchlessParallelO1() {
			name = "Heap Branchless Parallel (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapBranchlessParallelO2 : public Merge {
	public:
		MergeHeapBranchlessParallelO2() {
			name = "Heap Branchless Parallel (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapBranchlessParallelO3 : public Merge {
	public:
		MergeHeapBranchlessParallelO3() {
			name = "Heap Branchless Parallel (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapBranchlessParallelOs : public Merge {
	public:
		MergeHeapBranchlessParallelOs() {
			name = "Heap Branchless Parallel (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapBranchlessParallelOz : public Merge {
	public:
		MergeHeapBranchlessParallelOz() {
			name = "Heap Branchless Parallel (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
