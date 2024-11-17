#pragma once

#include "merge.h"

class MergeStateMachineLookupTableAlt : public Merge {
	public:
		MergeStateMachineLookupTableAlt() {
			name = "State Machine (Lookup Table Alternative)";
		}
		bool merge(struct test *t, int n) override;
};
