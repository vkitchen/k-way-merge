#pragma once

#include "merge.h"

class MergeInsertCache : public Merge {
	public:
		MergeInsertCache() {
			name = "Insert (Cache)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCacheO0 : public Merge {
	public:
		MergeInsertCacheO0() {
			name = "Insert Cache (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCacheO1 : public Merge {
	public:
		MergeInsertCacheO1() {
			name = "Insert Cache (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCacheO2 : public Merge {
	public:
		MergeInsertCacheO2() {
			name = "Insert Cache (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCacheO3 : public Merge {
	public:
		MergeInsertCacheO3() {
			name = "Insert Cache (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCacheOs : public Merge {
	public:
		MergeInsertCacheOs() {
			name = "Insert Cache (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertCacheOz : public Merge {
	public:
		MergeInsertCacheOz() {
			name = "Insert Cache (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
