#include <stdint.h>

static unsigned char priorities[][3] = {
	{ 2, 1, 0, }, // State 0
	{ 1, 2, 0, }, // State 1
	{ 2, 0, 1, }, // State 2
	{ 1, 0, 2, }, // State 3
	{ 0, 2, 1, }, // State 4
	{ 0, 1, 2, }, // State 5
};
static unsigned char transitions[][3] = {
	{ 0, 1, 3, }, // State 0
	{ 1, 0, 2, }, // State 1
	{ 2, 4, 5, }, // State 2
	{ 3, 5, 4, }, // State 3
	{ 4, 2, 0, }, // State 4
	{ 5, 3, 1, }, // State 5
};
