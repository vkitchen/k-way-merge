#pragma once

#include "merge.h"

class MergeAvxSortPointers : public Merge {
	public:
		MergeAvxSortPointers() {
			name = "AVX Sort (Pointers)";
		}
		bool merge(struct test *t, int n) override;
};
