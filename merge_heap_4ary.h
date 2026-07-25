#pragma once

#include "merge.h"

class MergeHeap4ary : public Merge {
	public:
		MergeHeap4ary() {
			name = "Heap 4ary";
		}
		bool merge(struct test *t, int n) override;
};
