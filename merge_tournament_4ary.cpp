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

static void initialise(int **segments, int n, Node *tree) {
	int total_nodes = (n - 1) / 3;
	int leaf_nodes = n / 4;
	int leaf_start = total_nodes - leaf_nodes;

	// Load leaves
	for (int node = 0; node < leaf_nodes; node++) {
		for (int j = 0; j < 4; j++) {
			int leaf = node * 4 + j;

			tree[leaf_start + node].entries[j] = {
				.score = *segments[leaf],
				.leaf = leaf,
			};
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

static void replay_games(Node *tree, int pos, int score) {
	int nodes = 21;

	// Find
	int i = (nodes + pos - 1) / 4;

	// Update
	tree[i].entries[0].score = score;

	// Sort
	sort_partial(tree[i]);

	int i2 = (i - 1) / 4;

	tree[i2].entries[0] = tree[i].entries[0];

	sort_partial(tree[i2]);

	tree[0].entries[0] = tree[i2].entries[0];

	sort_partial(tree[0]);
}

bool MergeTournament4ary::merge(struct test *t, int n) {
	if (n != 64) return false;

	int **segments = (int **)malloc(sizeof(int *) * n);
	Node *tree = (Node *)malloc(sizeof(Node) * (n - 1) / 3);

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

		replay_games(tree, index, *segments[index]);
	}

	return true;
}
