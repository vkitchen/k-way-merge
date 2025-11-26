#pragma once

#include "merge.h"

class MergeStateMachineCompiledBinarySearchCache : public Merge {
	public:
		MergeStateMachineCompiledBinarySearchCache() {
			name = "State Machine Binary Search Cache";
		}
		bool merge(struct test *t, int n) override;
};
