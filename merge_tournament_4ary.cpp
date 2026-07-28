#include "harness.h"

#include <immintrin.h>

#include "merge_tournament_4ary.h"

struct Entry {
	int score;
	int leaf;
};

struct Node {
	Entry entries[4];
};

static void sort(Node &a) {
	int i, j;
	for (i = 1; i < 4; i++) {
		Entry x = a.entries[i];
		for (j = i - 1; j >= 0 && a.entries[j].score < x.score; j--)
			a.entries[j+1] = a.entries[j];
		a.entries[j+1] = x;
	}
}

static int total_nodes(int n) {
	int level = (n + 3) / 4;

	int total = 0;
	while (level > 1) {
		total += level;
		level = (level + 3) / 4;
	}
	return total + 1;
}

static void initialise(int **segments, int n, Node *tree) {
	int nodes = total_nodes(n);
	int leaf_nodes = (n + 3) / 4;
	int leaf_start = nodes - leaf_nodes;

	// Load leaves
	for (int node = 0; node < leaf_nodes; node++) {
		for (int j = 0; j < 4; j++) {
			int leaf = node * 4 + j;

			if (leaf < n) {
				tree[leaf_start + node].entries[j] = {
					.score = *segments[leaf],
					.leaf = leaf,
				};
			} else {
				tree[leaf_start + node].entries[j] = { 0, 0 };
			}
		}

		sort(tree[leaf_start + node]);
	}

	// Load internal
	for (int node = leaf_start - 1; node >= 0; node--) {
		int first_child = node * 4 + 1;

		for (int j = 0; j < 4; j++)
			tree[node].entries[j] = tree[first_child + j].entries[0];

		sort(tree[node]);
	}
}

static void sort_partial(Node &a) {
	Entry min = a.entries[0];
	for (int j = 1; j < 4; j++) {
		Entry y = a.entries[j];
		a.entries[j - 1] = min.score >= y.score ? min : y;
		min = min.score >= y.score ? y : min;
	}
	a.entries[3] = min;
}

static void replay_games(Node *tree, int n, int pos, int score) {
	int nodes = total_nodes(n);
	int leaf_nodes = (n + 3) / 4;
	int leaf_start = nodes - leaf_nodes;

	// Leaf
	int node = leaf_start + pos / 4;
	tree[node].entries[0].score = score;
	sort_partial(tree[node]);

	// Internal
	while (node != 0) {
		int parent = (node - 1) / 4;

		tree[parent].entries[0] = tree[node].entries[0];
		sort_partial(tree[parent]);

		node = parent;
	}
}

bool MergeTournament4ary::merge(struct test *t, int n) {
	if (!(n == 16 or n == 64)) return false;

	int nodes = total_nodes(n);
	int **segments = (int **)malloc(sizeof(int *) * n);
	Node *tree = (Node *)aligned_alloc(32, sizeof(Node) * nodes);

	for (int i = 0; i < n; i++)
		segments[i] = t->postings[i];

	initialise(segments, n, tree);

	// process
	size_t pos = 0;
	for (;;) {
		if (tree[0].entries[0].score == 0)
			break;

		t->results[pos++] = tree[0].entries[0].score;

		int index = tree[0].entries[0].leaf;
		segments[index]++;

		replay_games(tree, n, index, *segments[index]);
	}

	return true;
}
