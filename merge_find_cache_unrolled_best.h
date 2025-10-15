#pragma once

#include "merge.h"

class MergeFindCacheUnrolledBest : public Merge {
	public:
		MergeFindCacheUnrolledBest() {
			name = "Find (Cache Unrolled Best)";
		}
		bool merge(struct test *t, int n) override;
};
