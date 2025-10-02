#pragma once

#include <stdlib.h>

struct test {
	int **postings;
	int *baseline;
	int *results;
	size_t length;
	size_t count;
};

struct test *harness_new(size_t length, size_t count);
void harness_generate(struct test *t);
void harness_generate_ordered(struct test *t);
void harness_reset(struct test *t);
const char *harness_verify(struct test *t, size_t length, size_t count);
