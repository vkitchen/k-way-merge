#pragma once

#include "merge.h"

class MergeFindCacheUnrolledSimd : public Merge {
	public:
		MergeFindCacheUnrolledSimd() {
			name = "Find (Cache Unrolled SIMD)";
		}
		bool merge(struct test *t, int n) override;
};
