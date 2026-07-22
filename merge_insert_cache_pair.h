#pragma once

#include "merge.h"

class MergeInsertCachePair : public Merge {
	public:
		MergeInsertCachePair() {
			name = "Insert Cache Pair";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCachePairO1 : public Merge {
	public:
		MergeInsertCachePairO1() {
			name = "Insert Cache Pair (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCachePairO2 : public Merge {
	public:
		MergeInsertCachePairO2() {
			name = "Insert Cache Pair (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCachePairO3 : public Merge {
	public:
		MergeInsertCachePairO3() {
			name = "Insert Cache Pair (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCachePairOs : public Merge {
	public:
		MergeInsertCachePairOs() {
			name = "Insert Cache Pair (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCachePairOz : public Merge {
	public:
		MergeInsertCachePairOz() {
			name = "Insert Cache Pair (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
