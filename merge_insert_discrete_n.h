#pragma once

#include "merge.h"

class MergeInsertDiscreteN : public Merge {
	public:
		MergeInsertDiscreteN() {
			name = "Insert Discrete N";
		}
		bool merge(struct test *t, int n) override;
};
