#pragma once

#include "merge.h"

class MergeHeap4aryBranchlessParallel : public Merge {
	public:
		MergeHeap4aryBranchlessParallel() {
			name = "Heap 4ary Branchless Parallel";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap4aryBranchlessParallelO1 : public Merge {
	public:
		MergeHeap4aryBranchlessParallelO1() {
			name = "Heap 4ary Branchless Parallel (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap4aryBranchlessParallelO2 : public Merge {
	public:
		MergeHeap4aryBranchlessParallelO2() {
			name = "Heap 4ary Branchless Parallel (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap4aryBranchlessParallelO3 : public Merge {
	public:
		MergeHeap4aryBranchlessParallelO3() {
			name = "Heap 4ary Branchless Parallel (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap4aryBranchlessParallelOs : public Merge {
	public:
		MergeHeap4aryBranchlessParallelOs() {
			name = "Heap 4ary Branchless Parallel (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap4aryBranchlessParallelOz : public Merge {
	public:
		MergeHeap4aryBranchlessParallelOz() {
			name = "Heap 4ary Branchless Parallel (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
