#pragma once

#include "merge.h"

class MergeHeap8aryParallel : public Merge {
	public:
		MergeHeap8aryParallel() {
			name = "Heap 8ary Parallel";
		}
		bool merge(struct test *t, int n) override;
};
