#pragma once

#include "merge.h"

void merge_baseline_copy_sort(struct test *t, int n);

class MergeBaselineCopySort : public Merge {
	public:
		MergeBaselineCopySort() {
			name = "Baseline (copy+sort)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};
