#pragma once

#include "merge.h"

class MergeInsertionSortIndexes : public Merge {
	public:
		MergeInsertionSortIndexes() {
			name = "Insertion Sort Indexes";
		}
		bool merge(struct test *t, int n) override;
};
