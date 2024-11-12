#include <vector>

#include "harness.h"

static size_t parent(size_t i) {
	return i / 2;
}

// returns [winner, loser]
static std::pair<int, int> play_game(std::vector<std::pair<int *, int>> &tree, int x, int y) {
	if (*tree[x].first > *tree[y].first)
		return std::make_pair(x, y);
	return std::make_pair(y, x);
}

static void initialise(int **a, int n, std::vector<std::pair<int *, int>> &tree) {
	std::vector<int> winners(n * 2);

	// Copy array into tree
	for (int i = 0; i < n; i++) {
		tree[i+n] = std::make_pair(a[i], 0); // TODO self point for easy copy?
		winners[i+n] = i+n;
	}

	for (size_t i = tree.size() - 2; i > 0; i -= 2) {
		auto [winner, loser] = play_game(tree, winners[i], winners[i+1]);
		size_t p = parent(i);
		winners[p] = winner;
		tree[p] = std::make_pair(tree[loser].first, loser);
	}

	tree[0] = std::make_pair(tree[winners[1]].first, winners[1]);
}

static void replay_games(std::vector<std::pair<int *, int>> &tree, int pos) {
	int p = parent(pos);
	while (p != 0) {
		// does parent still point to the loser?
		if (*tree[pos].first < *tree[p].first) {
			int tmp = pos;
			// pos now points to winner
			pos = tree[p].second;

			// parent now points to loser
			tree[p] = std::make_pair(tree[tmp].first, tmp);
		}
		p = parent(p);
	}
	// pos is the new winner
	tree[0] = std::make_pair(tree[pos].first, pos);
}

bool merge_tournament(struct test *t, int n) {
	std::vector<std::pair<int *, int>> tree(n * 2);

	initialise(t->postings, n, tree);

	// process
	size_t pos = 0;
	for (;;) {
		if (*tree[0].first == 0)
			break;

		t->results[pos++] = *tree[0].first;

		auto out = tree[0].second;
		tree[out].first++;

		replay_games(tree, tree[0].second);
	}

	return true;
}
