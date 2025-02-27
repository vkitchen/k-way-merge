#include <algorithm>
#include <vector>

#include "harness.h"
#include "pointer_box.h"

#include "merge_heap_stl.h"

typedef JASS::pointer_box<int> value_compare_pointer;

bool MergeHeapStl::merge(struct test *t, int n) {
	std::vector<value_compare_pointer> segments;

	for (int i = 0; i < n; i++)
		segments.push_back(t->postings[i]);
	
	std::make_heap(segments.begin(), segments.end());

	segments.push_back(0);

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0];

		/* Avoid double siftdown https://stackoverflow.com/questions/29662820/how-to-change-max-element-in-a-heap-in-c-standard-library */
		segments.back() = segments[0].pointer() + 1;
		std::pop_heap(segments.begin(), segments.end());
	}

	return true;
}
