#pragma once

#include "merge.h"

class MergeStateMachineCompiledVar : public Merge {
	public:
		MergeStateMachineCompiledVar() {
			name = "State Machine Var";
		}
		bool merge(struct test *t, int n) override;
};
