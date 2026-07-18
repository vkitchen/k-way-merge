#pragma once

#include "merge.h"

class MergeBubbleCache : public Merge {
	public:
		MergeBubbleCache() {
			name = "Bubble Cache";
		}
		bool merge(struct test *t, int n) override;
};
