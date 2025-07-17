#pragma once

#include "merge.h"

class MergeStateMachineCompiledCacheSimd : public Merge {
	public:
		MergeStateMachineCompiledCacheSimd() {
			name = "State Machine Cache SIMD";
		}
		bool merge(struct test *t, int n) override;
};
