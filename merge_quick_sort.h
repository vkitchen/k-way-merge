#pragma once

#include "merge.h"

class MergeQuickSort : public Merge {
	public:
		MergeQuickSort() {
			name = "Quick Sort";
		}
		bool merge(struct test *t, int n) override;
};
