#pragma once

#include "merge.h"

class MergeFind : public Merge {
	public:
		MergeFind() {
			name = "Find";
		}
		bool merge(struct test *t, int n) override;
};
