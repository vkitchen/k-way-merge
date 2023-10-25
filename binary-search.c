#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define LENGTH 40 * 1000 * 1000

int *a;
int *needles;


int linear_search(int needle) {
	for (size_t i = 0; i < LENGTH; i++)
		if (a[i] == needle)
			return i;
	return -1;
}

/* XXX can't find elements if it's the first or last in the array */
int bsearch_rec_helper(int needle, int pos, int step) {
	if (needle == a[pos])
		return pos;
	if (step == 0)
		return -1;
	if (needle < a[pos])
		return bsearch_rec_helper(needle, pos - step, (step == 1) ? 0 : (step + 1) / 2);
	if (needle > a[pos])
		return bsearch_rec_helper(needle, pos + step, (step == 1) ? 0 : (step + 1) / 2);

	return -1;
}

int bsearch_rec(int needle) {
	int pos = (LENGTH + 1) / 2;
	return bsearch_rec_helper(needle, pos, (pos + 1) / 2);
}

int bsearch_iter(int needle) {
	int start = 0, end = LENGTH - 1;
	while (start <= end) {
		int pos = start + ((end - start) / 2);
		if (a[pos] == needle)
			return pos;
		if (needle > a[pos])
			start = pos + 1;
		else
			end = pos - 1;
	}
	return -1;
}

int main() {
	size_t i = 0;
	int pos = 0;

	a = malloc(sizeof(int) * LENGTH);
	needles = malloc(sizeof(int) * LENGTH);

	srand(time(NULL));

	for (i = 0; i < LENGTH; i++) {
		a[i] = i;
		needles[i] = (rand() % (LENGTH - 2)) + 1;
	}

	clock_t time_begin = clock();

	for (i = 0; i < 500; i++)
		pos = linear_search(needles[i]);

	clock_t time_linear = clock();
	printf("Linear (%zd runs). Found %d in %f\n", i, pos, (double)(time_linear - time_begin) / CLOCKS_PER_SEC);

	for (i = 0; i < 40 * 1000 * 1000; i++) {
		pos = bsearch_rec(needles[i]);
		if (pos != needles[i]) {
			printf("fail key %d res %d", needles[i], pos);
			break;
		}
	}

	clock_t time_bsearch_rec = clock();
	printf("Binary Search (Recursive, %zd runs). Found %d in %f\n", i, pos, (double)(time_bsearch_rec - time_linear) / CLOCKS_PER_SEC);

	for (i = 0; i < 40 * 1000 * 1000; i++) {
		pos = bsearch_iter(needles[i]);
		if (pos != needles[i]) {
			printf("fail key %d res %d", needles[i], pos);
			break;
		}
	}

	clock_t time_bsearch_iter = clock();

	printf("Binary Search (Iterative, %zd runs). Found %d in %f\n", i, pos, (double)(time_bsearch_iter - time_bsearch_rec) / CLOCKS_PER_SEC);

	return 0;
}
