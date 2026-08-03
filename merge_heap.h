#pragma once

#include "merge.h"

class MergeHeap : public Merge {
	public:
		MergeHeap() {
			name = "Heap";
		}
		bool merge(struct test *t, int n) override;
};
