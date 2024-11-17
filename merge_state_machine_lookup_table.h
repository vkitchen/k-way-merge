#pragma once

#include "merge.h"

class MergeStateMachineLookupTable : public Merge {
	public:
		MergeStateMachineLookupTable() {
			name = "State Machine (Lookup Table)";
		}
		bool merge(struct test *t, int n) override;
};
