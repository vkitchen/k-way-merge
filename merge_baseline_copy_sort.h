#pragma once

#include "merge.h"

class MergeBaselineCopySort : public Merge {
	public:
		MergeBaselineCopySort() {
			name = "Baseline (copy+sort)";
		}
		bool merge(struct test *t, int n) override;
};
