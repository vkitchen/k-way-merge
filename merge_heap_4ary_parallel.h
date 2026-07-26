#pragma once

#include "merge.h"

class MergeHeap4aryParallel : public Merge {
	public:
		MergeHeap4aryParallel() {
			name = "Heap 4ary Parallel";
		}
		bool merge(struct test *t, int n) override;
};
