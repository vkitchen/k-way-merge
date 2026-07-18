#pragma once

#include "merge.h"

class MergeBubble : public Merge {
	public:
		MergeBubble() {
			name = "Bubble";
		}
		bool merge(struct test *t, int n) override;
};
