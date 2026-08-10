#pragma once

#include "merge.h"

class MergeHeap8aryParallelSimd : public Merge {
	public:
		MergeHeap8aryParallelSimd() {
			name = "Heap 8ary Parallel SIMD";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap8aryParallelSimdO1 : public Merge {
	public:
		MergeHeap8aryParallelSimdO1() {
			name = "Heap 8ary Parallel SIMD (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap8aryParallelSimdO2 : public Merge {
	public:
		MergeHeap8aryParallelSimdO2() {
			name = "Heap 8ary Parallel SIMD (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap8aryParallelSimdO3 : public Merge {
	public:
		MergeHeap8aryParallelSimdO3() {
			name = "Heap 8ary Parallel SIMD (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap8aryParallelSimdOs : public Merge {
	public:
		MergeHeap8aryParallelSimdOs() {
			name = "Heap 8ary Parallel SIMD (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeap8aryParallelSimdOz : public Merge {
	public:
		MergeHeap8aryParallelSimdOz() {
			name = "Heap 8ary Parallel SIMD (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
