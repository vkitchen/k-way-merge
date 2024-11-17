#pragma once

#include "merge.h"

class MergeAvxSort : public Merge {
	public:
		MergeAvxSort() {
			name = "AVX Sort";
		}
		bool merge(struct test *t, int n) override;
};
