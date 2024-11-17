#pragma once

#include "merge.h"

class MergeStateMachineCompiled : public Merge {
	public:
		MergeStateMachineCompiled() {
			name = "State Machine (Compiled)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledO0 : public Merge {
	public:
		MergeStateMachineCompiledO0() {
			name = "State Machine (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledO1 : public Merge {
	public:
		MergeStateMachineCompiledO1() {
			name = "State Machine (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledO2 : public Merge {
	public:
		MergeStateMachineCompiledO2() {
			name = "State Machine (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledO3 : public Merge {
	public:
		MergeStateMachineCompiledO3() {
			name = "State Machine (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledOs : public Merge {
	public:
		MergeStateMachineCompiledOs() {
			name = "State Machine (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledOz : public Merge {
	public:
		MergeStateMachineCompiledOz() {
			name = "State Machine (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
