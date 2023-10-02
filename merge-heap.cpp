#include <stdio.h>

#include "config.h"
#include "harness.h"
#include "heap.h"
#include "pointer_box.h"

typedef JASS::pointer_box<int> value_compare_pointer;

value_compare_pointer segments[4];

int main() {
	struct test *t = harness_new(TEST_SIZE, SEED);

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];
	
	JASS::heap<value_compare_pointer> priority(segments, 4);

	priority.make_heap();

	// process
	for (;;) {
		printf("%d\n", *segments[0]);

		segments[0] = segments[0].pointer() + 1;
		if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
			break;

		priority.promote(segments[0], 0);
	}
}
