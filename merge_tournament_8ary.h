#pragma once

#include "merge.h"

class MergeTournament8ary : public Merge {
	public:
		MergeTournament8ary() {
			name = "Tournament 8ary";
		}
		bool merge(struct test *t, int n) override;
};
