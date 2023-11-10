#include "merge_state_machine_lookup_table_alt.h"

void merge_state_machine_lookup_table_alt(struct test *t, int n) {
	if (n == 3)
		merge_state_machine_lookup_table_alt_3(t);
	else if (n == 4)
		merge_state_machine_lookup_table_alt_4(t);
	else if (n == 5)
		merge_state_machine_lookup_table_alt_5(t);
	else if (n == 6)
		merge_state_machine_lookup_table_alt_6(t);
	else if (n == 7)
		merge_state_machine_lookup_table_alt_7(t);
	else if (n == 8)
		merge_state_machine_lookup_table_alt_8(t);
}
