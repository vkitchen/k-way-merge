static char priorities[][3] = {
	{ 0, 1, 2, }, // State 0
	{ 0, 2, 1, }, // State 1
	{ 1, 0, 2, }, // State 2
	{ 2, 0, 1, }, // State 3
	{ 1, 2, 0, }, // State 4
	{ 2, 1, 0, }, // State 5
};
static char transitions[][3] = {
	{ 0, 2, 4, }, // State 0
	{ 1, 3, 5, }, // State 1
	{ 2, 0, 1, }, // State 2
	{ 3, 1, 0, }, // State 3
	{ 4, 5, 3, }, // State 4
	{ 5, 4, 2, }, // State 5
};
