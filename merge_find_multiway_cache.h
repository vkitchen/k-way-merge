#pragma once

#include "merge.h"

class MergeFindMultiwayCache : public Merge {
	public:
		MergeFindMultiwayCache() {
			name = "Find Multiway Cache";
		}
		bool merge(struct test *t, int n) override;
};
