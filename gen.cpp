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

void output_lookup(char *a) {
	sprintf(buffer, "%d%d%d%d", a[0], a[1], a[2], a[3]);
	printf("char lookup_%s[] = { %d, %d, %d, %d };\n", buffer, a[0], a[1], a[2], a[3]);
}

const char *lookup_fn = "\
int lookup(char *table, char needle) {\n\
	for (int i = 0; i < 4; i++)\n\
		if (needle < *segments[table[i]])\n\
			return i;\n\
	return 0;\n\
	}\n\
}\n\
";

void output_code(char *a, std::vector<char *> *transitions) {
	int highest = index_of(a, n);
	int second = index_of(a, n - 1);
	int third = index_of(a, n - 2);
	int fourth = index_of(a, n - 3);

	sprintf(buffer, "%d%d%d%d", a[0], a[1], a[2], a[3]);
	printf("ORDER_%s:\n", buffer);
	printf("t->results[pos++] = *segments[%d];\n", highest);
	printf("segments[%d]++;\n", highest);

	puts("if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)");
	puts("\tgoto DONE;");

	printf("if (*segments[%d] >= *segments[%d])\n", highest, second);
	printf("\tgoto ORDER_%s;\n", buffer);

	sprintf(buffer, "%d%d%d%d", (*transitions)[0][0], (*transitions)[0][1], (*transitions)[0][2], (*transitions)[0][3]);
	printf("else if (*segments[%d] >= *segments[%d])\n", highest, third);
	printf("\tgoto ORDER_%s;\n", buffer);

	sprintf(buffer, "%d%d%d%d", (*transitions)[1][0], (*transitions)[1][1], (*transitions)[1][2], (*transitions)[1][3]);
	printf("else if (*segments[%d] >= *segments[%d])\n", highest, fourth);
	printf("\tgoto ORDER_%s;\n", buffer);

	sprintf(buffer, "%d%d%d%d", (*transitions)[2][0], (*transitions)[2][1], (*transitions)[2][2], (*transitions)[2][3]);
	puts("else");
	printf("\tgoto ORDER_%s;\n", buffer);


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

int main() {
	generate_permutations();

	std::vector<char *> transitions;
	generate_transitions(&transitions, permutations[13]);

	for (size_t i = 0; i < permutations.size(); i++) {
		transitions.clear();
		generate_transitions(&transitions, permutations[i]);
		output_code(permutations[i], &transitions);
	}
	puts("DONE: ;");

	// output_code(permutations[13], &transitions);

	// for (size_t i = 0; i < permutations.size(); i++)
	// 	output_lookup(permutations[i]);
	// puts("");

	// puts(lookup_fn);

	// for (size_t i = 0; i < permutations.size(); i++)
	//	printf("%d%d%d%d\n", permutations[i][0], permutations[i][1], permutations[i][2], permutations[i][3]);
	// 	output_code(permutations[i]);

	return 0;
}
