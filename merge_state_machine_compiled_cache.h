#pragma once

#include "merge.h"

class MergeStateMachineCompiledCache : public Merge {
	public:
		MergeStateMachineCompiledCache() {
			name = "State Machine Cache";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledCacheO0 : public Merge {
	public:
		MergeStateMachineCompiledCacheO0() {
			name = "State Machine Cache (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledCacheO1 : public Merge {
	public:
		MergeStateMachineCompiledCacheO1() {
			name = "State Machine Cache (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledCacheO2 : public Merge {
	public:
		MergeStateMachineCompiledCacheO2() {
			name = "State Machine Cache (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledCacheO3 : public Merge {
	public:
		MergeStateMachineCompiledCacheO3() {
			name = "State Machine Cache (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledCacheOs : public Merge {
	public:
		MergeStateMachineCompiledCacheOs() {
			name = "State Machine Cache (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledCacheOz : public Merge {
	public:
		MergeStateMachineCompiledCacheOz() {
			name = "State Machine Cache (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
