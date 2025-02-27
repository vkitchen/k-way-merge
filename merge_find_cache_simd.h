#pragma once

#include "merge.h"

class MergeFindCacheSimd : public Merge {
	public:
		MergeFindCacheSimd() {
			name = "Find (Cache SIMD)";
		}
		bool merge(struct test *t, int n) override;
};
