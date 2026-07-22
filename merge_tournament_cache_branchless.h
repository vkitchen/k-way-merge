#pragma once

#include "merge.h"

class MergeTournamentCacheBranchless : public Merge {
	public:
		MergeTournamentCacheBranchless() {
			name = "Tournament Cache Branchless";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheBranchlessO1 : public Merge {
	public:
		MergeTournamentCacheBranchlessO1() {
			name = "Tournament Cache Branchless (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheBranchlessO2 : public Merge {
	public:
		MergeTournamentCacheBranchlessO2() {
			name = "Tournament Cache Branchless (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheBranchlessO3 : public Merge {
	public:
		MergeTournamentCacheBranchlessO3() {
			name = "Tournament Cache Branchless (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheBranchlessOs : public Merge {
	public:
		MergeTournamentCacheBranchlessOs() {
			name = "Tournament Cache Branchless (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheBranchlessOz : public Merge {
	public:
		MergeTournamentCacheBranchlessOz() {
			name = "Tournament Cache Branchless (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
