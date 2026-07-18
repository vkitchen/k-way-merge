#pragma once

#include "merge.h"

class MergeDoubleBubble : public Merge {
	public:
		MergeDoubleBubble() {
			name = "Double Bubble";
		}
		bool merge(struct test *t, int n) override;
};
