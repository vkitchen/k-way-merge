#pragma once

#include "merge.h"

class MergeStdSort : public Merge {
	public:
		MergeStdSort() {
			name = "Std Sort";
		}
		bool merge(struct test *t, int n) override;
};
