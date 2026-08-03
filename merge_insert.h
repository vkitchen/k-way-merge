#pragma once

#include "merge.h"

class MergeInsert : public Merge {
	public:
		MergeInsert() {
			name = "Insert";
		}
		bool merge(struct test *t, int n) override;
};
