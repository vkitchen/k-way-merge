#pragma once

#include "merge.h"

class MergeTournamentExternalBranchless : public Merge {
	public:
		MergeTournamentExternalBranchless() {
			name = "Tournament External Branchless";
		}
		bool merge(struct test *t, int n) override;
};
