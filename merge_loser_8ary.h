#pragma once

#include "merge.h"

class MergeLoser8ary : public Merge {
	public:
		MergeLoser8ary() {
			name = "Loser 8ary";
		}
		bool merge(struct test *t, int n) override;
};

class MergeLoser8aryO1 : public Merge {
	public:
		MergeLoser8aryO1() {
			name = "Loser 8ary (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeLoser8aryO2 : public Merge {
	public:
		MergeLoser8aryO2() {
			name = "Loser 8ary (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeLoser8aryO3 : public Merge {
	public:
		MergeLoser8aryO3() {
			name = "Loser 8ary (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeLoser8aryOs : public Merge {
	public:
		MergeLoser8aryOs() {
			name = "Loser 8ary (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeLoser8aryOz : public Merge {
	public:
		MergeLoser8aryOz() {
			name = "Loser 8ary (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
