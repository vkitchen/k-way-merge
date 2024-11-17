#pragma once

#include "merge.h"

class MergeTournament : public Merge {
	public:
		MergeTournament() {
			name = "Tournament Tree";
		}
		bool merge(struct test *t, int n) override;
};
