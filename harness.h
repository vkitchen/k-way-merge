#pragma once

#include <stdlib.h>

struct test {
	int **postings;
	int *results;
	size_t length;
	size_t count;
	unsigned int seed;
};

struct test *harness_new(size_t length, size_t count, unsigned int seed);
void harness_reset(struct test *t);
bool harness_verify(struct test *t, size_t length, size_t count);
