#pragma once

#include "merge.h"

class MergeHeapStl : public Merge {
	public:
		MergeHeapStl() {
			name = "Heap (STL)";
		}
		bool merge(struct test *t, int n) override;
};
