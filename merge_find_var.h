#pragma once

#include "merge.h"

class MergeFindVar : public Merge {
	public:
		MergeFindVar() {
			name = "Find Var";
		}
		bool merge(struct test *t, int n) override;
};
