#include <stdio.h>

#include "config.h"
#include "harness.h"
#include "heap.h"
#include "pointer_box.h"

typedef JASS::pointer_box<int> value_compare_pointer;

value_compare_pointer segments[4];

int main() {
	clock_t time_begin = clock();

	struct test *t = harness_new(TEST_SIZE, SEED);

	for (int i = 0; i < 4; i++)
		segments[i] = t->postings[i];
	
	JASS::heap<value_compare_pointer> priority(segments, 4);

	priority.make_heap();

	clock_t time_init = clock();
	printf("Init: %f\n", (double)(time_init - time_begin) / CLOCKS_PER_SEC);

	// process
	size_t pos = 0;
	for (;;) {
		t->results[pos++] = *segments[0];

		segments[0] = segments[0].pointer() + 1;
		if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
			break;

		priority.promote(segments[0], 0);
	}

	clock_t time_merge = clock();
	printf("Merge: %f\n", (double)(time_merge - time_init) / CLOCKS_PER_SEC);

	printf("Succeeded: %s\n", harness_verify(t) ? "true" : "false");

	clock_t time_verify = clock();
	printf("Verify: %f\n", (double)(time_verify - time_merge) / CLOCKS_PER_SEC);
}
