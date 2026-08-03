#pragma once

#include "merge.h"

class MergeTournament4ary : public Merge {
	public:
		MergeTournament4ary() {
			name = "Tournament 4ary";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournament4aryO1 : public Merge {
	public:
		MergeTournament4aryO1() {
			name = "Tournament 4ary (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournament4aryO2 : public Merge {
	public:
		MergeTournament4aryO2() {
			name = "Tournament 4ary (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournament4aryO3 : public Merge {
	public:
		MergeTournament4aryO3() {
			name = "Tournament 4ary (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournament4aryOs : public Merge {
	public:
		MergeTournament4aryOs() {
			name = "Tournament 4ary (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournament4aryOz : public Merge {
	public:
		MergeTournament4aryOz() {
			name = "Tournament 4ary (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
