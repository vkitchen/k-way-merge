#pragma once

#include "merge.h"

class MergeTournament2 : public Merge {
	public:
		MergeTournament2() {
			name = "Tournament Tree 2";
		}
		bool merge(struct test *t, int n) override;
};
