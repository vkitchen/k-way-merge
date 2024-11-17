#pragma once

#include "merge.h"

class MergeAvxSortDiscreteN : public Merge {
	public:
		MergeAvxSortDiscreteN() {
			name = "Avx Sort Discrete N";
		}
		bool merge(struct test *t, int n) override;
};
