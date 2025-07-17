#pragma once

#include "merge.h"

class MergeStateMachineCompiledCache : public Merge {
	public:
		MergeStateMachineCompiledCache() {
			name = "State Machine Cache";
		}
		bool merge(struct test *t, int n) override;
};
