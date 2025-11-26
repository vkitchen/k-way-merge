#pragma once

#include "merge.h"

class MergeStateMachineCompiledBinarySearch : public Merge {
	public:
		MergeStateMachineCompiledBinarySearch() {
			name = "State Machine Binary Search";
		}
		bool merge(struct test *t, int n) override;
};
