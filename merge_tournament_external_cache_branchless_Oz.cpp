#include <cstdint>
#include <vector>

#include "harness.h"

#include "merge_tournament_external_cache_branchless.h"

static size_t parent(size_t i) {
	return i / 2;
}

// returns [winner, loser]
static std::pair<int, int> play_game(int **a, int x, int y) {
	if (*a[x] > *a[y])
		return std::make_pair(x, y);
	return std::make_pair(y, x);
}

static void initialise(int **a, int n, uint16_t *tree) {
	std::vector<uint16_t> winners(n * 2);

	// Copy array into tree
	for (int i = 0; i < n; i++)
		winners[n + i] = i;

	for (int i = n - 1; i > 0; i--) {
		auto [winner, loser] = play_game(a, winners[i*2], winners[i*2 + 1]);
		winners[i] = winner;
		tree[i] = loser;
	}

	tree[0] = winners[1];
}

static void replay_games(int *cache, int n, uint16_t *tree, int pos) {
	int p = parent(pos + n);
	while (p != 0) {
		int cmp = tree[p];
		tree[p] = (cache[pos] < cache[cmp] ? pos : cmp);
		pos = (cache[pos] < cache[cmp] ? cmp : pos);
		p = parent(p);
	}
	// pos is the new winner
	tree[0] = pos;
}

bool MergeTournamentExternalCacheBranchlessOz::merge(struct test *t, int n) {
	int **segments = (int **)malloc(sizeof(int *) * n);
	int *cache = (int *)malloc(sizeof(int) * n);
	uint16_t *tree = (uint16_t *)malloc(sizeof(uint16_t) * n);

	for (int i = 0; i < n; i++) {
		segments[i] = t->postings[i];
		cache[i] = *t->postings[i];
	}

	initialise(segments, n, tree);

	// process
	size_t pos = 0;
	for (;;) {
		int winner = tree[0];
		if (cache[winner] == 0)
			break;

		t->results[pos++] = cache[winner];
		segments[winner]++;
		cache[winner] = *segments[winner];

		replay_games(cache, n, tree, winner);
	}

	return true;
}
