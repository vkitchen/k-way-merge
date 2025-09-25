#pragma once

#include "merge.h"

class MergeFindCache3 : public Merge {
	public:
		MergeFindCache3() {
			name = "Find (Cache 3)";
		}
		bool merge(struct test *t, int n) override;
};
