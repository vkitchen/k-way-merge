#pragma once

#include "merge.h"

class MergeInsertBinary : public Merge {
	public:
		MergeInsertBinary() {
			name = "Insert Binary";
		}
		bool merge(struct test *t, int n) override;
};
