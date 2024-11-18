#pragma once

#include <string>

class Merge {
	public:
		std::string name;
		virtual bool merge(struct test *, int) = 0;
};
