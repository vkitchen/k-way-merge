#include <vector>

#include "harness.h"

#include "merge_tournament_cache.h"

static size_t parent(size_t i) {
	return i / 2;
}

// returns [winner, loser]
static std::pair<int, int> play_game(std::vector<std::pair<int, int>> &tree, int x, int y) {
	if (tree[x].first > tree[y].first)
		return std::make_pair(x, y);
	return std::make_pair(y, x);
}

static void initialise(std::vector<int *> &segments, std::vector<std::pair<int, int>> &tree) {
	std::vector<int> winners(tree.size());

	// Copy array into tree
	for (size_t i = tree.size() / 2; i < tree.size(); i++)
		winners[i] = i;

	for (size_t i = tree.size() - 2; i > 0; i -= 2) {
		auto [winner, loser] = play_game(tree, winners[i], winners[i+1]);
		size_t p = parent(i);
		winners[p] = winner;
		tree[p] = std::make_pair(tree[loser].first, tree[loser].second);
	}

	tree[0] = std::make_pair(tree[winners[1]].first, tree[winners[1]].second);
}

static void replay_games(std::vector<std::pair<int, int>> &tree, int pos) {
	auto winner = tree[pos];

	int p = parent(pos);
	while (p != 0) {
		// does parent still point to the loser?
		if (winner.first < tree[p].first) {
			auto tmp = winner;

			winner = tree[p];

			// parent now points to loser
			tree[p] = tmp;
		}
		p = parent(p);
	}
	// store the new winner
	tree[0] = winner;
}

bool MergeTournamentCacheO3::merge(struct test *t, int n) {
	std::vector<int *> segments(t->postings, t->postings + n);
	std::vector<std::pair<int, int>> tree(n * 2); // (val, pos)

	for (int i = 0; i < n; i++) 
		tree[n+i] = std::make_pair(*t->postings[i], i);

	initialise(segments, tree);

	// process
	size_t pos = 0;
	for (;;) {
		if (tree[0].first == 0)
			break;

		t->results[pos++] = tree[0].first;

		int lst = tree[0].second;
		segments[lst]++;
		tree[n + lst].first = *segments[lst];

		replay_games(tree, n + lst);
	}

	return true;
}
