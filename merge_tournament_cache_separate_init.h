#pragma once

#include "merge.h"

class MergeTournamentCacheSeparateInit : public Merge {
	private:
		std::vector<int *> segments;
		std::vector<std::pair<int, int>> tree;

	public:
		MergeTournamentCacheSeparateInit() {
			name = "Tournament Tree Cache (Init)";
		}
		bool init(struct test *, int) override;
		bool merge(struct test *t, int n) override;
};
