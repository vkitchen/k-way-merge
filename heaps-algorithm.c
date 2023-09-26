#include <stdio.h>

int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int n = sizeof(a) / sizeof(int);

void output() {
	int i;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	puts("");
}

void swap(int i, int k) {
	int temp = a[i];
	a[i] = a[k];
	a[k] = temp;
}

void generate(int k) {
	int i;

	if (k == 1) {
		output();
		return;
	}

	generate(k - 1);

	for (i = 0; i < k-1; i++) {
		if ((k & 1) == 0) {
			swap(i, k-1);
		} else {
			swap(0, k-1);
		}
		generate(k - 1);
	}
}

int main() {
	generate(n);
	return 0;
}
