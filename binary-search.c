#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define LENGTH 40 * 1000 * 1000
#define RUNS 1000

int *a;


int linear_search(int needle) {
	for (size_t i = 0; i < LENGTH; i++)
		if (a[i] == needle)
			return i;
	return -1;
}

int main() {
	a = malloc(sizeof(int) * LENGTH);

	for (size_t i = 0; i < LENGTH; i++)
		a[i] = i;

	clock_t time_begin = clock();

	int pos;
	for (size_t i = 0; i < RUNS; i++)
		pos = linear_search(LENGTH / 2 + 1);

	clock_t time_linear = clock();
	printf("Linear. Found %d in %f\n", pos, (double)(time_linear - time_begin) / CLOCKS_PER_SEC);
	return 0;
}
