#pragma once

#include "merge.h"

class MergeFindCache : public Merge {
	public:
		MergeFindCache() {
			name = "Find (Cache)";
		}
		bool merge(struct test *t, int n) override;
};
