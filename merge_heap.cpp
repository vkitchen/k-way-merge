#include "harness.h"
#include "heap.h"
#include "pointer_box.h"

typedef JASS::pointer_box<int> value_compare_pointer;

static value_compare_pointer segments[4];

void merge_heap(struct test *t, int n) {
	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];
	
	JASS::heap<value_compare_pointer> priority(segments, 4);

	priority.make_heap();

	// process
	size_t pos = 0;
	for (;;) {
		t->results[pos++] = *segments[0];

		segments[0] = segments[0].pointer() + 1;
		if (*segments[0] == 0)
			break;

		priority.promote(segments[0], 0);
	}
}
