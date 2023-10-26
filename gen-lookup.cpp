#include <stdio.h>
#include <string.h>
#include <vector>

char a[] = { 4, 3, 2, 1, 0 };
int n = sizeof(a) - 1;
char buffer[255];

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
	int highest = index_of(a, n);
	int second = index_of(a, n - 1);
	int third = index_of(a, n - 2);
	int fourth = index_of(a, n - 3);

	printf("\t{ %d, %d, %d, %d }, // State %d\n", highest, second, third, fourth, index);
}

void output_transitions(int index, std::vector<char *> *transitions) {
	int transition_second = index_of_permutation((*transitions)[0]);
	int transition_third = index_of_permutation((*transitions)[1]);
	int transition_fourth = index_of_permutation((*transitions)[2]);
	printf("\t{ %d, %d, %d, %d }, // State %d\n", index, transition_second, transition_third, transition_fourth, index);
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

int main() {
	generate_permutations();

	std::vector<char *> transitions;
	generate_transitions(&transitions, permutations[13]);

	puts("char priorities[][4] = {");
	for (size_t i = 0; i < permutations.size(); i++) {
		output_priorities(i);
	}
	puts("};");

	puts("char transitions[][4] = {");
	for (size_t i = 0; i < permutations.size(); i++) {
		transitions.clear();
		generate_transitions(&transitions, permutations[i]);
		output_transitions(i, &transitions);
	}
	puts("};");

	return 0;
}
