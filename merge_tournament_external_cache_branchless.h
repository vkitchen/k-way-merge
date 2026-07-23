#pragma once

#include "merge.h"

class MergeTournamentExternalCacheBranchless : public Merge {
	public:
		MergeTournamentExternalCacheBranchless() {
			name = "Tournament External Cache Branchless";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentExternalCacheBranchlessO1 : public Merge {
	public:
		MergeTournamentExternalCacheBranchlessO1() {
			name = "Tournament External Cache Branchless (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentExternalCacheBranchlessO2 : public Merge {
	public:
		MergeTournamentExternalCacheBranchlessO2() {
			name = "Tournament External Cache Branchless (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentExternalCacheBranchlessO3 : public Merge {
	public:
		MergeTournamentExternalCacheBranchlessO3() {
			name = "Tournament External Cache Branchless (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentExternalCacheBranchlessOs : public Merge {
	public:
		MergeTournamentExternalCacheBranchlessOs() {
			name = "Tournament External Cache Branchless (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentExternalCacheBranchlessOz : public Merge {
	public:
		MergeTournamentExternalCacheBranchlessOz() {
			name = "Tournament External Cache Branchless (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
