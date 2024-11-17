#pragma once

#include "merge.h"

class MergePseudoAvxSort : public Merge {
	public:
		MergePseudoAvxSort() {
			name = "Pseudo AVX Sort";
		}
		bool merge(struct test *t, int n) override;
};
