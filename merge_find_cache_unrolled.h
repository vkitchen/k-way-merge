#pragma once

#include "merge.h"

class MergeFindCacheUnrolled : public Merge {
	public:
		MergeFindCacheUnrolled() {
			name = "Find (Cache Unrolled)";
		}
		bool merge(struct test *t, int n) override;
};
