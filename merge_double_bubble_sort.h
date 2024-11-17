#pragma once

#include "merge.h"

class MergeDoubleBubbleSort : public Merge {
	public:
		MergeDoubleBubbleSort() {
			name = "Double Bubble Sort";
		}
		bool merge(struct test *t, int n) override;
};
