#include <string.h>
#include <limits.h>

#include <algorithm>
#include <functional>

#include "harness.h"

struct test *harness_new(size_t length, size_t count) {
	size_t i;

	struct test *t = (struct test *)malloc(sizeof(struct test));
	t->postings = (int **)malloc(sizeof(int *) * count);
	t->length = length;
	t->count = count;

	/* Allocate */
	for (i = 0; i < count; i++) {
		t->postings[i] = (int *)malloc(sizeof(int) * (length + 1));
		t->postings[i][length] = 0;
	}
	t->baseline = (int *)malloc(sizeof(int) * (length * count + 1));
	t->results = (int *)malloc(sizeof(int) * (length * count + 1));

	/* Fill */
	memset(t->baseline, 0, sizeof(int) * (t->length * count + 1));

	return t;
}

void harness_generate(struct test *t) {
	size_t i, j;

	/* Fill */
	for (i = 0; i < t->count; i++)
		for (j = 0; j < t->length; j++)
			t->postings[i][j] = (rand() % (INT_MAX - 1)) + 1;
	
	/* Sort */
	for (i = 0; i < t->count; i++)
		std::sort(t->postings[i], &t->postings[i][t->length], std::greater<int>());
}

void harness_reset(struct test *t) {
	memset(t->results, 0, sizeof(int) * (t->length * t->count + 1));
}

const char *harness_verify(struct test *t, size_t length, size_t count) {
	size_t i;
	if (t->results[0] == 0)
		return "Starts with \\0";
	if (t->results[length * count] != 0)
		return "Overrun";

	for (i = 1; i < length * count; i++) {
		if (t->results[i] == 0)
			return "Includes \\0";
		if (t->results[i-1] < t->results[i])
			return "Ascending values";
	}

	for (i = 0; i < length * count; i++)
		if (t->baseline[i] != t->results[i])
			return "Doesn't match baseline";

	return "";
}
