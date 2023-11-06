#include "merge_state_machine_lookup_table.h"

void merge_state_machine_lookup_table(struct test *t, int n) {
	if (n == 3)
		merge_state_machine_lookup_table_3(t);
	else if (n == 4)
		merge_state_machine_lookup_table_4(t);
	else if (n == 5)
		merge_state_machine_lookup_table_5(t);
	else if (n == 6)
		merge_state_machine_lookup_table_6(t);
	else if (n == 7)
		merge_state_machine_lookup_table_7(t);
}
