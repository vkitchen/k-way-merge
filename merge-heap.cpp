#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "pointer_box.h"
#include "heap.h"

typedef JASS::pointer_box<int> value_compare_pointer;

int postings[4][21];
value_compare_pointer segments[4];

int cmp(const void *a, const void *b) {
	return *(int *)b - *(int *)a;
}

int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

int main() {
	int i, j;
	// fill array
	srand(time(NULL));
	for (i = 0; i < 4; i++)
		for (j = 0; j < 20; j++)
			postings[i][j] = (rand() % 254) + 1;
	// zero terminate
	for (i = 0; i < 4; i++)
		postings[i][20] = 0;
	// take pointers
	for (i = 0; i < 4; i++)
		segments[i] = (int *)&postings[i];
	// sort
	qsort(postings[0], 20, sizeof(int), cmp);
	qsort(postings[1], 20, sizeof(int), cmp);
	qsort(postings[2], 20, sizeof(int), cmp);
	qsort(postings[3], 20, sizeof(int), cmp);
	qsort(segments, 4, sizeof(int *), cmp_p);
	
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
