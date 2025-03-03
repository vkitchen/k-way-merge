#pragma once

#include "merge.h"

class MergeInsert : public Merge {
	public:
		MergeInsert() {
			name = "Insert";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertO0 : public Merge {
	public:
		MergeInsertO0() {
			name = "Insert (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertO1 : public Merge {
	public:
		MergeInsertO1() {
			name = "Insert (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertO2 : public Merge {
	public:
		MergeInsertO2() {
			name = "Insert (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertO3 : public Merge {
	public:
		MergeInsertO3() {
			name = "Insert (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertOs : public Merge {
	public:
		MergeInsertOs() {
			name = "Insert (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeInsertOz : public Merge {
	public:
		MergeInsertOz() {
			name = "Insert (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
