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

int index_of_permutation(char *needle) {
	size_t i;
	for (i = 0; i < permutations.size(); i++)
		if (strcmp(permutations[i], needle) == 0)
			return i;
	return -1;
}

void output_priorities(int index) {
	char *a = permutations[index];

	printf("\t{ ");
	for (int i = 0; i < n; i++)
		printf("%d, ", index_of(a, n - i));
	printf("}, // State %d\n", index);
}

void output_transitions(int index, std::vector<char *> *transitions) {
	printf("\t{ %d, ", index);
	for (int i = 0; i < n - 1; i++)
		printf("%d, ", index_of_permutation((*transitions)[i]));
	printf("}, // State %d\n", index);
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
	if (argc != 2) {
		puts("Usage: gen [n]");
		return 0;
	}

	n = atoi(argv[1]);
	if (!(3 <= n && n <= 16)) {
		puts("Error: param [n] not within range 3-16");
		return 1;
	}

	a = (char *)malloc(n + 1);
	for (int i = 0; i < n; i++)
		a[i] = n - i;
	a[n] = 0;

	generate_permutations();

	std::vector<char *> transitions;

	printf("static char priorities[][%d] = {\n", n);
	for (size_t i = 0; i < permutations.size(); i++) {
		output_priorities(i);
	}
	puts("};");

	printf("static char transitions[][%d] = {\n", n);
	for (size_t i = 0; i < permutations.size(); i++) {
		transitions.clear();
		generate_transitions(&transitions, permutations[i]);
		output_transitions(i, &transitions);
	}
	puts("};");

	return 0;
}
