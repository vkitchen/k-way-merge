#pragma once

#include "merge.h"

class MergeStateMachineLookupTableAsc : public Merge {
	public:
		MergeStateMachineLookupTableAsc() {
			name = "State Machine (Lookup Table Ascending)";
		}
		bool merge(struct test *t, int n) override;
};
