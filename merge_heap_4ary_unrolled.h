#pragma once

#include "merge.h"

class MergeHeap4aryUnrolled : public Merge {
	public:
		MergeHeap4aryUnrolled() {
			name = "Heap 4ary Unrolled";
		}
		bool merge(struct test *t, int n) override;
};
