#include "merge_state_machine_lookup_table_asc.h"

void merge_state_machine_lookup_table_asc(struct test *t, int n) {
	if (n == 3)
		merge_state_machine_lookup_table_asc_3(t);
	else if (n == 4)
		merge_state_machine_lookup_table_asc_4(t);
	else if (n == 5)
		merge_state_machine_lookup_table_asc_5(t);
	else if (n == 6)
		merge_state_machine_lookup_table_asc_6(t);
	else if (n == 7)
		merge_state_machine_lookup_table_asc_7(t);
	else if (n == 8)
		merge_state_machine_lookup_table_asc_8(t);
}
