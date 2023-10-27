#pragma once

#include <stdlib.h>

struct test {
	int *postings[4];
	int *results;
	size_t size;
	unsigned int seed;
};

struct test *harness_new(size_t size, unsigned int seed);
bool harness_verify(struct test *t);
