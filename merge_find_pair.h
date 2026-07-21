#pragma once

#include "merge.h"

class MergeFindPair : public Merge {
	public:
		MergeFindPair() {
			name = "Find Pair";
		}
		bool merge(struct test *t, int n) override;
};
