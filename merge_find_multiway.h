#pragma once

#include "merge.h"

class MergeFindMultiway : public Merge {
	public:
		MergeFindMultiway() {
			name = "Find Multiway";
		}
		bool merge(struct test *t, int n) override;
};
