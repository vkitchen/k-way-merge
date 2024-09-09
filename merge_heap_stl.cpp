#include <algorithm>
#include <vector>

#include "harness.h"
#include "pointer_box.h"

typedef JASS::pointer_box<int> value_compare_pointer;

bool merge_heap_stl(struct test *t, int n) {
	std::vector<value_compare_pointer> segments;

	for (int i = 0; i < n; i++)
		segments.push_back(t->postings[i]);
	
	std::make_heap(segments.begin(), segments.end());

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0];

		/* Avoid double siftdown https://stackoverflow.com/questions/29662820/how-to-change-max-element-in-a-heap-in-c-standard-library */
		segments.push_back(segments[0].pointer() + 1);
		std::pop_heap(segments.begin(), segments.end());
		segments.pop_back();
	}

	return true;
}
