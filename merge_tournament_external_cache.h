#pragma once

#include "merge.h"

class MergeTournamentExternalCache : public Merge {
	public:
		MergeTournamentExternalCache() {
			name = "Tournament External Cache";
		}
		bool merge(struct test *t, int n) override;
};
