#pragma once

#include "merge.h"

class MergeInsertionSortFastDiscreteN : public Merge {
	public:
		MergeInsertionSortFastDiscreteN() {
			name = "Insertion Sort Fast Discrete N";
		}
		bool merge(struct test *t, int n) override;
};
