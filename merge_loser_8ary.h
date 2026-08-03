#pragma once

#include "merge.h"

class MergeLoser8ary : public Merge {
	public:
		MergeLoser8ary() {
			name = "Loser 8ary";
		}
		bool merge(struct test *t, int n) override;
};
