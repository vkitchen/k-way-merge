#include <algorithm>
#include <cstdio>
#include <ctime>
#include <vector>

int main() {
	clock_t time_begin, time_end;

	std::vector<int> nums{0, 1, 2, 3, 4, 5};

	for (;;) {
		time_begin = clock();
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < nums.size(); needle++)
				if (&(*std::find(nums.begin(), nums.end(), needle)) == NULL)
					puts("Not found");
		time_end = clock();

		double runtime_linear = (double)(time_end - time_begin) / CLOCKS_PER_SEC;

		time_begin = clock();
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < nums.size(); needle++)
				if (!std::binary_search(nums.begin(), nums.end(), needle))
					puts("Not found");
		time_end = clock();

		double runtime_binary = (double)(time_end - time_begin) / CLOCKS_PER_SEC;

		if (runtime_binary < runtime_linear) {
			printf("Swapped at %ld. Linear(s) %f. Binary(s) %f\n", nums.size(), runtime_linear, runtime_binary);
			break;
		}


		printf("%ld %f %f\n", nums.size(), runtime_linear, runtime_binary);

		nums.push_back(nums.size());
	}

	return 0;
}
