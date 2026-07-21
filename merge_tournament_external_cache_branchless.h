#pragma once

#include "merge.h"

class MergeTournamentExternalCacheBranchless : public Merge {
	public:
		MergeTournamentExternalCacheBranchless() {
			name = "Tournament External Cache Branchless";
		}
		bool merge(struct test *t, int n) override;
};
