#include <stdio.h>

int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int n = sizeof(a) / sizeof(int);

void interchange(int j, int l) {
	int temp = a[j];
	a[j] = a[l];
	a[l] = temp;
}

int main() {
	int i, j, l, k;
	for (;;) {
		for (i = 0; i < n; i++)
			printf("%d", a[i]);
		puts("");

		j = n - 1;
		while (a[j-1] >= a[j])
			j--;
		if (j == 0)
			break;

		l = n;
		while (a[j-1] >= a[l-1])
			l--;
		interchange(j-1, l-1);

		k = j + 1;
		l = n;
		while (k < l) {
			interchange(k-1, l-1);
			k++;
			l--;
		}
	}
	return 0;
}
