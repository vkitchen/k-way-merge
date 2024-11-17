#pragma once

#include "merge.h"

class MergeHeap : public Merge {
	public:
		MergeHeap() {
			name = "Heap";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapO0 : public Merge {
	public:
		MergeHeapO0() {
			name = "Heap (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapO1 : public Merge {
	public:
		MergeHeapO1() {
			name = "Heap (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapO2 : public Merge {
	public:
		MergeHeapO2() {
			name = "Heap (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapO3 : public Merge {
	public:
		MergeHeapO3() {
			name = "Heap (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapOs : public Merge {
	public:
		MergeHeapOs() {
			name = "Heap (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapOz : public Merge {
	public:
		MergeHeapOz() {
			name = "Heap (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
