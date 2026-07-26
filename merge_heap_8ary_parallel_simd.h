#pragma once

#include "merge.h"

class MergeHeap8aryParallelSimd : public Merge {
	public:
		MergeHeap8aryParallelSimd() {
			name = "Heap 8ary Parallel SIMD";
		}
		bool merge(struct test *t, int n) override;
};
