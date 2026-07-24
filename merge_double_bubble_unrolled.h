#pragma once

#include "merge.h"

class MergeDoubleBubbleUnrolled : public Merge {
	public:
		MergeDoubleBubbleUnrolled() {
			name = "Double Bubble Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
