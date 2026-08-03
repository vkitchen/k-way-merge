#pragma once

#include "merge.h"

class MergeLoser4ary : public Merge {
	public:
		MergeLoser4ary() {
			name = "Loser 4ary";
		}
		bool merge(struct test *t, int n) override;
};
