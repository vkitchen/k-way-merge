#include <algorithm>
#include <vector>

#include "harness.h"
#include "pointer_box.h"

#include "merge_heap_stl_naive.h"

typedef JASS::pointer_box<int> value_compare_pointer;

bool MergeHeapStlNaive::merge(struct test *t, int n) {
	std::vector<value_compare_pointer> segments;

	for (int i = 0; i < n; i++)
		segments.push_back(t->postings[i]);
	
	std::make_heap(segments.begin(), segments.end());

	// process
	size_t pos = 0;
	for (;;) {
		std::pop_heap(segments.begin(), segments.end());

		if (*segments.back() == 0)
			break;

		t->results[pos++] = *segments.back();

		segments.back() = segments.back().pointer() + 1;

		std::push_heap(segments.begin(), segments.end());
	}

	return true;
}
