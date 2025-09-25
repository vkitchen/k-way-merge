#pragma once

#include "merge.h"

class MergeFindCacheUnrolledAlt : public Merge {
	public:
		MergeFindCacheUnrolledAlt() {
			name = "Find (Cache Unrolled Alt)";
		}
		bool merge(struct test *t, int n) override;
};
