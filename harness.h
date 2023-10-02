#pragma once

struct test {
	int *postings[4];
	int *segments[4];
	size_t size;
	unsigned int seed;
};

struct test *harness_new(size_t size, unsigned int seed);
