#pragma once

#include "merge.h"

class MergeHeapCache : public Merge {
	public:
		MergeHeapCache() {
			name = "Heap Cache";
		}
		bool merge(struct test *t, int n) override;
};
