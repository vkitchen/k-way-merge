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

int bsearch_iter2(int needle) {
	int start = 0, end = LENGTH;
	while (start + 1 != end) {
		int pos = (start + end) / 2;
		if (a[pos] < needle)
			start = pos;
		else
			end = pos;
	}
	// end >= LENGTH ??
	if (end > LENGTH || a[end] != needle)
		return -1;
	return a[end];
}

int bsearch_iter3(int needle) {
	int inc = 33554432;
	int start;
	if (a[33554432] >= needle)
		start = 0;
	else
		start = LENGTH + 1 - 33554432;
	while (inc != 1) {
		int nextInc = inc / 2;
		if (a[start + nextInc] < needle)
			start += nextInc;
		inc = nextInc;
	}
	int pos = start + 1;
	if (pos > LENGTH || a[pos] != needle)
		return -1;
	return a[pos];
}

int bsearch_iter4(int needle) {
	int inc = 33554432, start = 0;
	if (a[33554432] < needle)
		start = LENGTH + 1 - 33554432;
	while (inc != 1) {
		inc /= 2;
		if (a[start + inc] < needle)
			start = start + inc;
	}
	int pos = start + 1;
	if (pos > LENGTH || a[pos] != needle)
		return -1;
	return a[pos];
}

int bsearch_iter5(int needle) {
	int start = -1;

	if (a[33554432 - 1] < needle)
		start = LENGTH - 33554432;
	if (a[start + 16777216] < needle)
		start += 16777216;
	if (a[start + 8388608] < needle)
		start += 8388608;
	if (a[start + 4194304] < needle)
		start += 4194304;
	if (a[start + 2097152] < needle)
		start += 2097152;
	if (a[start + 1048576] < needle)
		start += 1048576;
	if (a[start + 524288] < needle)
		start += 524288;
	if (a[start + 262144] < needle)
		start += 262144;
	if (a[start + 131072] < needle)
		start += 131072;
	if (a[start + 65536] < needle)
		start += 65536;
	if (a[start + 32768] < needle)
		start += 32768;
	if (a[start + 16384] < needle)
		start += 16384;
	if (a[start + 8192] < needle)
		start += 8192;
	if (a[start + 4096] < needle)
		start += 4096;
	if (a[start + 2048] < needle)
		start += 2048;
	if (a[start + 1024] < needle)
		start += 1024;
	if (a[start + 512] < needle)
		start += 512;
	if (a[start + 256] < needle)
		start += 256;
	if (a[start + 128] < needle)
		start += 128;
	if (a[start + 64] < needle)
		start += 64;
	if (a[start + 32] < needle)
		start += 32;
	if (a[start + 16] < needle)
		start += 16;
	if (a[start + 8] < needle)
		start += 8;
	if (a[start + 4] < needle)
		start += 4;
	if (a[start + 2] < needle)
		start += 2;
	if (a[start + 1] < needle)
		start += 1;

	int pos = start + 1;

	if (pos >= LENGTH || a[pos] != needle)
		return -1;

	return pos;
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

	for (i = 0; i < 40 * 1000 * 1000; i++) {
		pos = bsearch_iter2(needles[i]);
		if (pos != needles[i]) {
			printf("fail key %d res %d", needles[i], pos);
			break;
		}
	}

	clock_t time_bsearch_iter2 = clock();

	printf("Binary Search (Iterative 2, %zd runs). Found %d in %f\n", i, pos, (double)(time_bsearch_iter2 - time_bsearch_iter) / CLOCKS_PER_SEC);

	for (i = 0; i < 40 * 1000 * 1000; i++) {
		pos = bsearch_iter3(needles[i]);
		if (pos != needles[i]) {
			printf("fail key %d res %d", needles[i], pos);
			break;
		}
	}

	clock_t time_bsearch_iter3 = clock();

	printf("Binary Search (Iterative 3, %zd runs). Found %d in %f\n", i, pos, (double)(time_bsearch_iter3 - time_bsearch_iter2) / CLOCKS_PER_SEC);

	for (i = 0; i < 40 * 1000 * 1000; i++) {
		pos = bsearch_iter4(needles[i]);
		if (pos != needles[i]) {
			printf("fail key %d res %d", needles[i], pos);
			break;
		}
	}

	clock_t time_bsearch_iter4 = clock();

	printf("Binary Search (Iterative 4, %zd runs). Found %d in %f\n", i, pos, (double)(time_bsearch_iter4 - time_bsearch_iter3) / CLOCKS_PER_SEC);

	for (i = 0; i < 40 * 1000 * 1000; i++) {
		pos = bsearch_iter5(needles[i]);
		if (pos != needles[i]) {
			printf("fail key %d res %d", needles[i], pos);
			break;
		}
	}

	clock_t time_bsearch_iter5 = clock();

	printf("Binary Search (Iterative 5, %zd runs). Found %d in %f\n", i, pos, (double)(time_bsearch_iter5 - time_bsearch_iter4) / CLOCKS_PER_SEC);

	return 0;
}
