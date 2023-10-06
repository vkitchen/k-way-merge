#include <stdlib.h>
#include <limits.h>

#include "harness.h"

static int cmp(const void *a, const void *b) {
	return *(int *)b - *(int *)a;
}

struct test *harness_new(size_t size, unsigned int seed) {
	size_t i, j;

	struct test *t = (struct test *)malloc(sizeof(struct test));
	t->size = size;
	t->seed = seed;

	/* Allocate */
	for (i = 0; i < 4; i++) {
		t->postings[i] = (int *)malloc(sizeof(int) * (size + 1));
		t->postings[i][size] = 0;
	}
	t->results = (int *)malloc(sizeof(int) * size * 4);

	/* Fill */
	srand(seed);
	for (i = 0; i < 4; i++)
		for (j = 0; j < size; j++)
			t->postings[i][j] = (rand() % (INT_MAX - 1)) + 1;
	
	/* Sort */
	for (i = 0; i < 4; i++)
		qsort(t->postings[i], size, sizeof(int), cmp);

	return t;
}

bool harness_verify(struct test *t) {
	size_t i;
	for (i = 1; i < t->size; i++)
		if (t->results[i-1] < t->results[i])
			return false;
	return true;
}
