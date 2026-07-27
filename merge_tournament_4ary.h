#pragma once

#include "merge.h"

class MergeTournament4ary : public Merge {
	public:
		MergeTournament4ary() {
			name = "Tournament 4ary";
		}
		bool merge(struct test *t, int n) override;
};
