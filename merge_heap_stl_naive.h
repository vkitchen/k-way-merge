#pragma once

#include "merge.h"

class MergeHeapStlNaive : public Merge {
	public:
		MergeHeapStlNaive() {
			name = "Heap (STL Naive)";
		}
		bool merge(struct test *t, int n) override;
};
