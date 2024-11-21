#pragma once

#include "merge.h"

class MergeTournament2SeparateInit : public Merge {
	private:
		std::vector<int *> segments;
		std::vector<std::pair<int, int>> tree;

	public:
		MergeTournament2SeparateInit() {
			name = "Tournament Tree 2 (Init)";
		}
		bool init(struct test *, int) override;
		bool merge(struct test *t, int n) override;
};
