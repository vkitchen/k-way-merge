#pragma once

#include "merge.h"

class MergeTournamentCacheBranchless : public Merge {
	public:
		MergeTournamentCacheBranchless() {
			name = "Tournament Cache Branchless";
		}
		bool merge(struct test *t, int n) override;
};
