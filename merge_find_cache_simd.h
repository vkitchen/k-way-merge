#pragma once

#include "merge.h"

class MergeFindCacheSimd : public Merge {
	public:
		MergeFindCacheSimd() {
			name = "Find SIMD";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheSimdO1 : public Merge {
	public:
		MergeFindCacheSimdO1() {
			name = "Find SIMD (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheSimdO2 : public Merge {
	public:
		MergeFindCacheSimdO2() {
			name = "Find SIMD (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheSimdO3 : public Merge {
	public:
		MergeFindCacheSimdO3() {
			name = "Find SIMD (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheSimdOs : public Merge {
	public:
		MergeFindCacheSimdOs() {
			name = "Find SIMD (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeFindCacheSimdOz : public Merge {
	public:
		MergeFindCacheSimdOz() {
			name = "Find SIMD (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
