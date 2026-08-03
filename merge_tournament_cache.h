#pragma once

#include "merge.h"

class MergeTournamentCache : public Merge {
	public:
		MergeTournamentCache() {
			name = "Tournament Cache";
		}
		bool merge(struct test *t, int n) override;
};
