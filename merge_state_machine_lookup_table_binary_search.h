#pragma once

#include "merge.h"

class MergeStateMachineLookupTableBinarySearch : public Merge {
	public:
		MergeStateMachineLookupTableBinarySearch() {
			name = "State Machine (Binary Search)";
		}
		bool merge(struct test *t, int n) override;
};
