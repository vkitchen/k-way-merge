#pragma once

#include "merge.h"

class MergeFindCacheUnrolled : public Merge {
	public:
		MergeFindCacheUnrolled() {
			name = "Find (Cache Unrolled)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheUnrolledO0 : public Merge {
	public:
		MergeFindCacheUnrolledO0() {
			name = "Find Unrolled (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheUnrolledO1 : public Merge {
	public:
		MergeFindCacheUnrolledO1() {
			name = "Find Unrolled (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheUnrolledO2 : public Merge {
	public:
		MergeFindCacheUnrolledO2() {
			name = "Find Unrolled (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheUnrolledO3 : public Merge {
	public:
		MergeFindCacheUnrolledO3() {
			name = "Find Unrolled (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheUnrolledOs : public Merge {
	public:
		MergeFindCacheUnrolledOs() {
			name = "Find Unrolled (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheUnrolledOz : public Merge {
	public:
		MergeFindCacheUnrolledOz() {
			name = "Find Unrolled (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
