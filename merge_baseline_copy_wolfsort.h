#pragma once

#include "merge.h"

class MergeBaselineCopyWolfSort : public Merge {
	public:
		MergeBaselineCopyWolfSort() {
			name = "Baseline (copy+wolfsort)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};
