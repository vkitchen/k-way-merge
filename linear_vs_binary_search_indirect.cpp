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
			for (unsigned char needle = 0; needle < pointers.size(); needle++)
				if (&(*std::find_if(pointers.begin(), pointers.end(), [needle](unsigned char a) { return (size_t)*nums[a] == needle; })) == NULL)
					puts("Not found");
		time_end = clock();

		double runtime_linear = (double)(time_end - time_begin) / CLOCKS_PER_SEC;

		time_begin = clock();
		for (int i = 0; i < 100'000; i++)
			for (unsigned char needle = 0; needle < pointers.size(); needle++)
				if (!std::binary_search(pointers.begin(), pointers.end(), needle, [](unsigned char a, unsigned char b) { return *nums[a] < *nums[b]; }))
					puts("Not found");
		time_end = clock();

		double runtime_binary = (double)(time_end - time_begin) / CLOCKS_PER_SEC;

		if (runtime_binary < runtime_linear) {
			printf("Swapped at %ld. Linear(s) %f. Binary(s) %f\n", nums.size(), runtime_linear, runtime_binary);
			break;
		}


		printf("%ld %f %f\n", nums.size(), runtime_linear, runtime_binary);

		int *mem = (int *)malloc(1024 * 1024 * 1024);
		mem[0] = nums.size();
		nums.push_back(mem);
		pointers.push_back(pointers.size());

		if (pointers.size() == 200)
			break;
	}

	return 0;
}
