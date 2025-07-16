#include "harness.h"
#include "heap.h"
#include "pointer_box_cache.h"

#include "merge_heap_cache.h"

typedef JASS::pointer_box_inver_cache<int> value_compare_pointer;

bool MergeHeapCacheO1::merge(struct test *t, int n) {
	value_compare_pointer *segments = (value_compare_pointer *)malloc(sizeof(value_compare_pointer) * n);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];
	
	JASS::heap<value_compare_pointer> priority(segments, n);

	priority.make_heap();

	// process
	size_t pos = 0;
	for (;;) {
		if (*segments[0] == 0)
			break;

		t->results[pos++] = *segments[0];

		segments[0] = segments[0].pointer() + 1;
		segments[0].refresh();

		priority.promote(segments[0], 0);
	}

	free(segments);

	return true;
}
