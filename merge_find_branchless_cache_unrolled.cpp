#include "harness.h"

#include "merge_find_branchless_cache_unrolled.h"

bool MergeFindBranchlessCacheUnrolled::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = t->postings[i][0];
	}

	// process
	size_t pos = 0;
	if (n == 3) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 3; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 4) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 4; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 5) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 5; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 6) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 6; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 7) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 7; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 8) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 8; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 9) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 9; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 10) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 10; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 11) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 11; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 12) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 12; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 13) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 13; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 14) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 14; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 15) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 15; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else if (n == 16) {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < 16; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	} else {
		for (;;) {
			int best = 0;
			int best_i = 0;

			for (int i = 0; i < n; i++) {
				int cmp = cache[i];
				best = (best > cmp ? best : cmp);
				best_i = (best > cmp ? best_i : i);
			}

			if (best == 0)
				break;

			t->results[pos++] = best;
			cache[best_i] = *++segments[best_i];
		}
	}

	free(cache);
	free(segments);

	return true;
}
