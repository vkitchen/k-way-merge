#pragma once

#include "merge.h"

class MergeInsertionSortFast : public Merge {
	public:
		MergeInsertionSortFast() {
			name = "Insertion Sort Fast";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertionSortFastO0 : public Merge {
	public:
		MergeInsertionSortFastO0() {
			name = "Insert (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertionSortFastO1 : public Merge {
	public:
		MergeInsertionSortFastO1() {
			name = "Insert (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertionSortFastO2 : public Merge {
	public:
		MergeInsertionSortFastO2() {
			name = "Insert (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertionSortFastO3 : public Merge {
	public:
		MergeInsertionSortFastO3() {
			name = "Insert (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertionSortFastOs : public Merge {
	public:
		MergeInsertionSortFastOs() {
			name = "Insert (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertionSortFastOz : public Merge {
	public:
		MergeInsertionSortFastOz() {
			name = "Insert (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
