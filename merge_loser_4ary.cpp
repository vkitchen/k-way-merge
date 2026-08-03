#include "harness.h"

#include "merge_loser_4ary.h"

#define ARITY 4

struct Entry {
	int score;
	int leaf;
};

struct Node {
	Entry entries[ARITY];
};

static int total_nodes(int n) {
	int level = (n + (ARITY - 1)) / ARITY;

	int total = 0;
	while (level > 1) {
		total += level;
		level = (level + (ARITY - 1)) / ARITY;
	}
	return total + 1;
}

static std::pair<Entry, Entry> play_game(Entry x, Entry y) {
	if (x.score > y.score)
		return std::make_pair(x, y);
	return std::make_pair(y, x);
}

static void initialise(int **segments, int n, Node *tree) {
	int nodes = total_nodes(n);
	int child_nodes = (n + (ARITY - 1)) / ARITY;
	int child_start = nodes - child_nodes;

	// Load leaves
	for (int node = 0; node < child_nodes; node++) {
		int leaf = node * ARITY;
		Entry child0 = { 0, 0 };
		Entry child1 = { 0, 0 };
		Entry child2 = { 0, 0 };
		Entry child3 = { 0, 0 };
		if (leaf < n) {
			child0 = { .score = *segments[leaf], .leaf = leaf };
		}
		if (leaf + 1 < n) {
			child1 = { .score = *segments[leaf+1], .leaf = leaf+1 };
		}
		if (leaf + 2 < n) {
			child2 = { .score = *segments[leaf+2], .leaf = leaf+2 };
		}
		if (leaf + 3 < n) {
			child3 = { .score = *segments[leaf+3], .leaf = leaf+3 };
		}
		auto [winner01, loser01] = play_game(child0, child1);
		auto [winner23, loser23] = play_game(child2, child3);
		auto [winner, loser] = play_game(winner01, winner23);
		tree[child_start + node].entries[0] = winner;
		tree[child_start + node].entries[1] = loser;
		tree[child_start + node].entries[2] = loser01;
		tree[child_start + node].entries[3] = loser23;
	}

	// Load internal
	while (child_nodes > 1) {
		int parent_nodes = (child_nodes + (ARITY - 1)) / ARITY;
		int parent_start = child_start - parent_nodes;

		for (int p = 0; p < parent_nodes; p++) {
			int leaf = p * ARITY;
			Entry child0 = { 0, 0 };
			Entry child1 = { 0, 0 };
			Entry child2 = { 0, 0 };
			Entry child3 = { 0, 0 };
			if (leaf < child_nodes) {
				child0 = tree[child_start + leaf].entries[0];
			}
			if (leaf + 1 < child_nodes) {
				child1 = tree[child_start + leaf + 1].entries[0];
			}
			if (leaf + 2 < child_nodes) {
				child2 = tree[child_start + leaf + 2].entries[0];
			}
			if (leaf + 3 < child_nodes) {
				child3 = tree[child_start + leaf + 3].entries[0];
			}
			auto [winner01, loser01] = play_game(child0, child1);
			auto [winner23, loser23] = play_game(child2, child3);
			auto [winner, loser] = play_game(winner01, winner23);
			tree[parent_start + p].entries[0] = winner;
			tree[parent_start + p].entries[1] = loser;
			tree[parent_start + p].entries[2] = loser01;
			tree[parent_start + p].entries[3] = loser23;
		}

		child_nodes = parent_nodes;
		child_start = parent_start;
	}
}

static Entry replay_games(Node *tree, int child_nodes, int child_start, Entry winner) {
	// Leaf
	int node = child_start + winner.leaf / ARITY;
	int pair = (winner.leaf & 2) >> 1;

	// Internal
	while (true) {
		auto cmp = tree[node].entries[2 + pair];
		tree[node].entries[2 + pair] = winner.score < cmp.score ? winner : cmp;
		winner = winner.score < cmp.score ? cmp : winner;

		cmp = tree[node].entries[1];
		tree[node].entries[1] = winner.score < cmp.score ? winner : cmp;
		winner = winner.score < cmp.score ? cmp : winner;

		if (node == 0)
			break;

		int child = (node - child_start) % 4;
		pair = (child & 2) >> 1;

		int parent_nodes = (child_nodes + (ARITY - 1)) / ARITY;
		int parent_start = child_start - parent_nodes;

		int parent = parent_start + (node - child_start) / ARITY;

		node = parent;
		child_nodes = parent_nodes;
		child_start = parent_start;
	}

	return winner;
}

bool MergeLoser4ary::merge(struct test *t, int n) {
	int nodes = total_nodes(n);
	int child_nodes = (n + (ARITY - 1)) / ARITY;
	int child_start = nodes - child_nodes;

	int **segments = (int **)malloc(sizeof(int *) * n);
	Node *tree = (Node *)aligned_alloc(sizeof(Node), sizeof(Node) * nodes);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	initialise(segments, n, tree);

	Entry winner = tree[0].entries[0];

	// process
	size_t pos = 0;
	for (;;) {
		if (winner.score == 0)
			break;

		t->results[pos++] = winner.score;

		int index = winner.leaf;
		segments[index]++;

		winner = replay_games(tree, child_nodes, child_start, { .score = *segments[index], .leaf = index });
	}

	return true;
}
