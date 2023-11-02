#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "harness.h"

static int cmp(const void *a, const void *b) {
	return *(int *)b - *(int *)a;
}

struct test *harness_new(size_t length, size_t count, unsigned int seed) {
	size_t i, j;

	struct test *t = (struct test *)malloc(sizeof(struct test));
	t->postings = (int **)malloc(sizeof(int *) * count);
	t->length = length;
	t->count = count;
	t->seed = seed;

	/* Allocate */
	for (i = 0; i < count; i++) {
		t->postings[i] = (int *)malloc(sizeof(int) * (length + 1));
		t->postings[i][length] = 0;
	}
	t->results = (int *)malloc(sizeof(int) * (length * count + 1));

	/* Fill */
	srand(seed);
	for (i = 0; i < count; i++)
		for (j = 0; j < length; j++)
			t->postings[i][j] = (rand() % (INT_MAX - 1)) + 1;
	
	/* Sort */
	for (i = 0; i < count; i++)
		qsort(t->postings[i], length, sizeof(int), cmp);

	return t;
}

void harness_reset(struct test *t) {
	memset(t->results, 0, sizeof(int) * (t->length * t->count + 1));
}

bool harness_verify(struct test *t, size_t length, size_t count) {
	size_t i;
	if (t->results[0] == 0 || t->results[length * count] != 0)
		return false;

	for (i = 1; i < length * count; i++) {
		if (t->results[i] == 0)
			return false;
		if (t->results[i-1] < t->results[i])
			return false;
	}

	return true;
}
