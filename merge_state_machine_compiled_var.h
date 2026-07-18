#pragma once

#include "merge.h"

class MergeStateMachineCompiledVar : public Merge {
	public:
		MergeStateMachineCompiledVar() {
			name = "State Machine Var";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledVarO0 : public Merge {
	public:
		MergeStateMachineCompiledVarO0() {
			name = "State Machine Var (O0)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledVarO1 : public Merge {
	public:
		MergeStateMachineCompiledVarO1() {
			name = "State Machine Var (O1)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledVarO2 : public Merge {
	public:
		MergeStateMachineCompiledVarO2() {
			name = "State Machine Var (O2)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledVarO3 : public Merge {
	public:
		MergeStateMachineCompiledVarO3() {
			name = "State Machine Var (O3)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledVarOs : public Merge {
	public:
		MergeStateMachineCompiledVarOs() {
			name = "State Machine Var (Os)";
		}
		bool merge(struct test *t, int n) override;
};

class MergeStateMachineCompiledVarOz : public Merge {
	public:
		MergeStateMachineCompiledVarOz() {
			name = "State Machine Var (Oz)";
		}
		bool merge(struct test *t, int n) override;
};
