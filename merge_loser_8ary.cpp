#include "harness.h"

#include "merge_loser_8ary.h"

#define ARITY 8

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
		Entry child4 = { 0, 0 };
		Entry child5 = { 0, 0 };
		Entry child6 = { 0, 0 };
		Entry child7 = { 0, 0 };
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
		if (leaf + 4 < n) {
			child4 = { .score = *segments[leaf+4], .leaf = leaf+4 };
		}
		if (leaf + 5 < n) {
			child5 = { .score = *segments[leaf+5], .leaf = leaf+5 };
		}
		if (leaf + 6 < n) {
			child6 = { .score = *segments[leaf+6], .leaf = leaf+6 };
		}
		if (leaf + 7 < n) {
			child7 = { .score = *segments[leaf+7], .leaf = leaf+7 };
		}
		auto [winner01, loser01] = play_game(child0, child1);
		auto [winner23, loser23] = play_game(child2, child3);
		auto [winner45, loser45] = play_game(child4, child5);
		auto [winner67, loser67] = play_game(child6, child7);
		auto [winner0123, loser0123] = play_game(winner01, winner23);
		auto [winner4567, loser4567] = play_game(winner45, winner67);
		auto [winner, loser] = play_game(winner0123, winner4567);
		tree[child_start + node].entries[0] = winner;
		tree[child_start + node].entries[1] = loser;
		tree[child_start + node].entries[2] = loser0123;
		tree[child_start + node].entries[3] = loser4567;
		tree[child_start + node].entries[4] = loser01;
		tree[child_start + node].entries[5] = loser23;
		tree[child_start + node].entries[6] = loser45;
		tree[child_start + node].entries[7] = loser67;
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
			Entry child4 = { 0, 0 };
			Entry child5 = { 0, 0 };
			Entry child6 = { 0, 0 };
			Entry child7 = { 0, 0 };
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
			if (leaf + 4 < child_nodes) {
				child4 = tree[child_start + leaf + 4].entries[0];
			}
			if (leaf + 5 < child_nodes) {
				child5 = tree[child_start + leaf + 5].entries[0];
			}
			if (leaf + 6 < child_nodes) {
				child6 = tree[child_start + leaf + 6].entries[0];
			}
			if (leaf + 7 < child_nodes) {
				child7 = tree[child_start + leaf + 7].entries[0];
			}
			auto [winner01, loser01] = play_game(child0, child1);
			auto [winner23, loser23] = play_game(child2, child3);
			auto [winner45, loser45] = play_game(child4, child5);
			auto [winner67, loser67] = play_game(child6, child7);
			auto [winner0123, loser0123] = play_game(winner01, winner23);
			auto [winner4567, loser4567] = play_game(winner45, winner67);
			auto [winner, loser] = play_game(winner0123, winner4567);
			tree[parent_start + p].entries[0] = winner;
			tree[parent_start + p].entries[1] = loser;
			tree[parent_start + p].entries[2] = loser0123;
			tree[parent_start + p].entries[3] = loser4567;
			tree[parent_start + p].entries[4] = loser01;
			tree[parent_start + p].entries[5] = loser23;
			tree[parent_start + p].entries[6] = loser45;
			tree[parent_start + p].entries[7] = loser67;
		}

		child_nodes = parent_nodes;
		child_start = parent_start;
	}
}

static Entry replay_games(Node *tree, int child_nodes, int child_start, Entry winner) {
	// Leaf
	int node = child_start + winner.leaf / ARITY;
	int child = winner.leaf & (ARITY - 1);

	// Internal
	while (true) {
		int pair = child >> 1;
		int half = child >> 2;

		Entry cmp = tree[node].entries[4 + pair];
		tree[node].entries[4 + pair] = winner.score < cmp.score ? winner : cmp;
		winner = winner.score < cmp.score ? cmp : winner;

		cmp = tree[node].entries[2 + half];
		tree[node].entries[2 + half] = winner.score < cmp.score ? winner : cmp;
		winner = winner.score < cmp.score ? cmp : winner;

		cmp = tree[node].entries[1];
		tree[node].entries[1] = winner.score < cmp.score ? winner : cmp;
		winner = winner.score < cmp.score ? cmp : winner;

		if (node == 0)
			break;

		int offset = node - child_start;

		int parent_nodes = (child_nodes + ARITY - 1) / ARITY;
		int parent_start = child_start - parent_nodes;

		child = offset & (ARITY - 1);

		node = parent_start + offset / ARITY;

		child_nodes = parent_nodes;
		child_start = parent_start;

//		int child = (node - child_start) % 4;
//		pair = (child & 2) >> 1;
//
//		int parent_nodes = (child_nodes + (ARITY - 1)) / ARITY;
//		int parent_start = child_start - parent_nodes;
//
//		int parent = parent_start + (node - child_start) / ARITY;
//
//		node = parent;
//		child_nodes = parent_nodes;
//		child_start = parent_start;
	}

	return winner;
}

bool MergeLoser8ary::merge(struct test *t, int n) {
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
