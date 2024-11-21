#pragma once

#include "merge.h"

#include "heap.h"
#include "pointer_box.h"

typedef JASS::pointer_box_inver<int> value_compare_pointer;

class MergeHeapSeparateInit : public Merge {
	private:
		value_compare_pointer *segments;
		JASS::heap<value_compare_pointer> *priority;

	public:
		MergeHeapSeparateInit() {
			name = "Heap (Init)";
		}
		bool init(struct test *, int) override;
		bool merge(struct test *t, int n) override;
};
