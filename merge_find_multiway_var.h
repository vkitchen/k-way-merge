#pragma once

#include "merge.h"

class MergeFindMultiwayVar : public Merge {
	public:
		MergeFindMultiwayVar() {
			name = "Find Multiway Var";
		}
		bool merge(struct test *t, int n) override;
};
