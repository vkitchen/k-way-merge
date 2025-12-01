#pragma once

#include "merge.h"

class MergeFindCacheSimdUnrolled : public Merge {
	public:
		MergeFindCacheSimdUnrolled() {
			name = "Find (Cache SIMD Unrolled)";
		}
		bool merge(struct test *t, int n) override;
};
