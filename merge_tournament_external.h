#pragma once

#include "merge.h"

class MergeTournamentExternal : public Merge {
	public:
		MergeTournamentExternal() {
			name = "Tournament External";
		}
		bool merge(struct test *t, int n) override;
};
