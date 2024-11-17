#pragma once

#include "merge.h"

class MergeBubbleSortFast : public Merge {
	public:
		MergeBubbleSortFast() {
			name = "Bubble Sort Fast";
		}
		bool merge(struct test *t, int n) override;
};
