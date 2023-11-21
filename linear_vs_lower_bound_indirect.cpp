#include <algorithm>
#include <cstdio>
#include <ctime>
#include <vector>

std::vector<int *> nums;
std::vector<unsigned char> pointers;

int main() {
	clock_t time_begin, time_end;

	for (int i = 0; i < 5; i++) {
		int *mem = (int *)malloc(1024 * 1024 * 1024);
		mem[0] = i;
		nums.push_back(mem);
		pointers.push_back(i);
	}


	for (;;) {
		time_begin = clock();
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < nums.size(); needle++)
				if (&(*std::find_if(pointers.begin(), pointers.end(), [needle](unsigned char a) { return (size_t)*nums[a] == needle; })) == NULL)
					puts("Not found");
		time_end = clock();

		double runtime_linear = (double)(time_end - time_begin) / CLOCKS_PER_SEC;

		time_begin = clock();
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < nums.size(); needle++)
				if (&(*std::lower_bound(pointers.begin(), pointers.end(), needle, [](int a, int b) { return *nums[a] < *nums[b]; })) == NULL)
					puts("Not found");
		time_end = clock();

		double runtime_lower_bound = (double)(time_end - time_begin) / CLOCKS_PER_SEC;

		if (runtime_lower_bound < runtime_linear) {
			printf("Swapped at %ld. Linear(s) %f. Lower Bound(s) %f\n", nums.size(), runtime_linear, runtime_lower_bound);
			break;
		}


		printf("%ld %f %f\n", nums.size(), runtime_linear, runtime_lower_bound);

		int *mem = (int *)malloc(1024 * 1024 * 1024);
		mem[0] = nums.size();
		nums.push_back(mem);
		pointers.push_back(pointers.size());
	}

	return 0;
}
