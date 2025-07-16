#pragma once

#include "merge.h"

class MergeHeapCache : public Merge {
	public:
		MergeHeapCache() {
			name = "Heap (Cache)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapCacheO0 : public Merge {
	public:
		MergeHeapCacheO0() {
			name = "Heap Cache (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapCacheO1 : public Merge {
	public:
		MergeHeapCacheO1() {
			name = "Heap Cache (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapCacheO2 : public Merge {
	public:
		MergeHeapCacheO2() {
			name = "Heap Cache (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapCacheO3 : public Merge {
	public:
		MergeHeapCacheO3() {
			name = "Heap Cache (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapCacheOs : public Merge {
	public:
		MergeHeapCacheOs() {
			name = "Heap Cache (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeHeapCacheOz : public Merge {
	public:
		MergeHeapCacheOz() {
			name = "Heap Cache (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
