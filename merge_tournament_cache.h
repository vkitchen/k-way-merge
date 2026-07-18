#pragma once

#include "merge.h"

class MergeTournamentCache : public Merge {
	public:
		MergeTournamentCache() {
			name = "Tournament Cache";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheO0 : public Merge {
	public:
		MergeTournamentCacheO0() {
			name = "Tournament Cache (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheO1 : public Merge {
	public:
		MergeTournamentCacheO1() {
			name = "Tournament Cache (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheO2 : public Merge {
	public:
		MergeTournamentCacheO2() {
			name = "Tournament Cache (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheO3 : public Merge {
	public:
		MergeTournamentCacheO3() {
			name = "Tournament Cache (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheOs : public Merge {
	public:
		MergeTournamentCacheOs() {
			name = "Tournament Cache (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeTournamentCacheOz : public Merge {
	public:
		MergeTournamentCacheOz() {
			name = "Tournament Cache (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
