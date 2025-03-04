#pragma once

#include "merge.h"

class MergeInsertCache : public Merge {
	public:
		MergeInsertCache() {
			name = "Insert (Cache)";
		}
		bool merge(struct test *t, int n) override;
};
