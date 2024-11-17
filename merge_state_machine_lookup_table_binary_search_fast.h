#pragma once

#include "merge.h"

class MergeStateMachineLookupTableBinarySearchFast : public Merge {
	public:
		MergeStateMachineLookupTableBinarySearchFast() {
			name = "State Machine (Binary Search Fast)";
		}
		bool merge(struct test *t, int n) override;
};
