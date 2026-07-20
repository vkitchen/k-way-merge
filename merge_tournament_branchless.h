#pragma once

#include "merge.h"

class MergeTournamentBranchless : public Merge {
	public:
		MergeTournamentBranchless() {
			name = "Tournament Branchless";
		}
		bool merge(struct test *t, int n) override;
};
