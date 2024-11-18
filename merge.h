#pragma once

#include <string>

class Merge {
	public:
		std::string name;
		virtual bool init(struct test *, int) {
			return false;
		}
		virtual bool merge(struct test *, int) = 0;
};
