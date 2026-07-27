#pragma once

#include "merge.h"

class MergeDoubleBubbleCache : public Merge {
	public:
		MergeDoubleBubbleCache() {
			name = "Double Bubble Cache";
		}
		bool merge(struct test *t, int n) override;
};
