#pragma once

#include "merge.h"

class MergeHeapFloyds : public Merge {
	public:
		MergeHeapFloyds() {
			name = "Heap Floyds";
		}
		bool merge(struct test *t, int n) override;
};
