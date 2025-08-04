#pragma once

#include "merge.h"

class MergeInsertCachePair : public Merge {
	public:
		MergeInsertCachePair() {
			name = "Insert Cache Pair";
		}
		bool merge(struct test *t, int n) override;
};
