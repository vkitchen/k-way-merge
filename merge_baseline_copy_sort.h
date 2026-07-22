#pragma once

#include "merge.h"

void merge_baseline_copy_sort(struct test *t, int n);

class MergeBaselineCopySort : public Merge {
	public:
		MergeBaselineCopySort() {
			name = "Baseline (copy+sort)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};

class MergeBaselineCopySortO1 : public Merge {
	public:
		MergeBaselineCopySortO1() {
			name = "Baseline (O1)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};

class MergeBaselineCopySortO2 : public Merge {
	public:
		MergeBaselineCopySortO2() {
			name = "Baseline (O2)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};

class MergeBaselineCopySortO3 : public Merge {
	public:
		MergeBaselineCopySortO3() {
			name = "Baseline (O3)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};

class MergeBaselineCopySortOs : public Merge {
	public:
		MergeBaselineCopySortOs() {
			name = "Baseline (Os)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};

class MergeBaselineCopySortOz : public Merge {
	public:
		MergeBaselineCopySortOz() {
			name = "Baseline (Oz)";
		}
		bool init(struct test *t, int n) override {
			return true;
		}
		bool merge(struct test *t, int n) override;
};
