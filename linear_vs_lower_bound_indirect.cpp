#include <algorithm>
#include <cstdio>
#include <ctime>
#include <vector>

std::vector<int *> nums;
std::vector<unsigned char> pointers;

int main() {
	for (int i = 0; i < 5; i++) {
		int *mem = (int *)malloc(1024 * 1024 * 1024);
		mem[0] = i;
		nums.push_back(mem);
		pointers.push_back(i);
	}


	for (;;) {
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < pointers.size(); needle++)
				if (std::find_if(pointers.begin(), pointers.end(), [needle](unsigned char a) { return (size_t)*nums[a] == needle; }) == pointers.end())
					puts("Not found");

		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < pointers.size(); needle++)
				if (std::lower_bound(pointers.begin(), pointers.end(), needle, [](int a, int needle) { return *nums[a] < *nums[needle]; }) == pointers.end())
					puts("Not found");

		auto time_begin = std::chrono::steady_clock::now();
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < pointers.size(); needle++)
				if (std::find_if(pointers.begin(), pointers.end(), [needle](unsigned char a) { return (size_t)*nums[a] == needle; }) == pointers.end())
					puts("Not found");
		auto time_end = std::chrono::steady_clock::now();

		auto runtime_linear = std::chrono::duration_cast<unit_t>(end - start).count();

		auto time_begin = std::chrono::steady_clock::now();
		for (int i = 0; i < 100'000; i++)
			for (size_t needle = 0; needle < pointers.size(); needle++)
				if (std::lower_bound(pointers.begin(), pointers.end(), needle, [](int a, int needle) { return *nums[a] < *nums[needle]; }) == pointers.end())
					puts("Not found");
		auto time_end = std::chrono::steady_clock::now();

		auto runtime_lower_bound = std::chrono::duration_cast<unit_t>(end - start).count();

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
