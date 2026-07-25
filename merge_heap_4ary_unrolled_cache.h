#pragma once

#include "merge.h"

class MergeHeap4aryUnrolledCache : public Merge {
	public:
		MergeHeap4aryUnrolledCache() {
			name = "Heap 4ary Unrolled Cache";
		}
		bool merge(struct test *t, int n) override;
};
