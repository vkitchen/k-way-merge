#pragma once

#include "merge.h"

class MergeInsertionSort : public Merge {
	public:
		MergeInsertionSort() {
			name = "Insertion Sort";
		}
		bool merge(struct test *t, int n) override;
};
