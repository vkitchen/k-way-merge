#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>

char *a;
int n;

std::vector<char *> permutations;

void swap(int j, int l) {
	int temp = a[j];
	a[j] = a[l];
	a[l] = temp;
}

int index_of(char *haystack, int needle) {
	int i;
	for (i = 0; i < n; i++)
		if (haystack[i] == needle)
			return i;
	return -1;
}

void print_label(char *a) {
	printf("ORDER_");
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
}

void output_code(char *a, std::vector<char *> *transitions) {
	int highest = index_of(a, n);
	int second = index_of(a, n - 1);
	int third = index_of(a, n - 2);
	int fourth = index_of(a, n - 3);

	print_label(a);
	puts(":");

	printf("if (*segments[%d] == 0)\n", highest);
	puts("\tgoto DONE;");

	printf("t->results[pos++] = *segments[%d]++;\n", highest);

	printf("if (*segments[%d] >= *segments[%d])\n", highest, third);
	printf("\tif (*segments[%d] >= *segments[%d])\n", highest, second);
	// pos 1
	printf("\t\tgoto ");
	print_label(a);
	puts(";");
	puts("\telse");
	// pos 2
	printf("\t\tgoto ");
	print_label((*transitions)[0]);
	puts(";");
	puts("else");
	printf("\tif (*segments[%d] >= *segments[%d])\n", highest, fourth);
	// pos 3
	printf("\t\tgoto ");
	print_label((*transitions)[1]);
	puts(";");
	// pos 4
	puts("\telse");
	printf("\t\tgoto ");
	print_label((*transitions)[2]);
	puts(";");

	puts("");
}

void generate_permutations() {
	int j, l, k;
	for (;;) {
		char *result = strdup(a);
		permutations.push_back(result);

		for (j = n - 2; j >= 0 && a[j] <= a[j+1]; j--)
			;
		if (j < 0)
			break;

		for (l = n - 1; a[j] <= a[l]; l--)
			;
		swap(j, l);

		k = j + 1;
		l = n - 1;
		while (k < l) {
			swap(k, l);
			k++;
			l--;
		}

	}
}

void generate_transitions(std::vector<char *> *transitions, char *permutation_in) {
	char *permutation = strdup(permutation_in);

	int highest = index_of(permutation, n);

	for (int i = n - 1; i > 0; i--) {
		int replace = permutation[highest] - 1;
		for (int c = 0; c < n; c++)
			if (permutation[c] == replace)
				permutation[c]++;

		permutation[highest]--;

		char *transition = strdup(permutation);
		transitions->push_back(transition);
	}
}

int main(int argc, char **argv) {
	n = 4;

	a = (char *)malloc(n + 1);
	for (int i = 0; i < n; i++)
		a[i] = n - i;
	a[n] = 0;

	generate_permutations();

	std::vector<char *> transitions;

	for (size_t i = 0; i < permutations.size(); i++) {
		transitions.clear();
		generate_transitions(&transitions, permutations[i]);
		output_code(permutations[i], &transitions);
	}

	return 0;
}
