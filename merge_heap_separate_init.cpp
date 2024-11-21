#include "harness.h"
#include "heap.h"
#include "pointer_box.h"

#include "merge_heap_separate_init.h"

bool MergeHeapSeparateInit::init(struct test *t, int n) {
	segments = (value_compare_pointer *)malloc(sizeof(value_compare_pointer) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];
	
	priority = new JASS::heap<value_compare_pointer>(segments, n);

	priority->make_heap();

	return true;
}

bool MergeHeapSeparateInit::merge(struct test *t, int n) {
	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0];

		segments[0] = segments[0].pointer() + 1;

		priority->promote(segments[0], 0);
	}

	free(segments);

	return true;
}
