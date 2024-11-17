#pragma once

#include "merge.h"

class MergeBubbleSort : public Merge {
	public:
		MergeBubbleSort() {
			name = "Bubble Sort";
		}
		bool merge(struct test *t, int n) override;
};
