#pragma once

#include "merge.h"

class MergeHeap4aryCache : public Merge {
	public:
		MergeHeap4aryCache() {
			name = "Heap 4ary Cache";
		}
		bool merge(struct test *t, int n) override;
};
