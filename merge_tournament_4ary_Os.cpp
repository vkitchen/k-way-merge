#include "harness.h"

#include "merge_tournament_4ary.h"

#define ARITY 4

struct Entry {
	int score;
	int leaf;
};

struct Node {
	Entry entries[ARITY];
};

static void sort(Node &a) {
	int i, j;
	for (i = 1; i < ARITY; i++) {
		Entry x = a.entries[i];
		for (j = i - 1; j >= 0 && a.entries[j].score < x.score; j--)
			a.entries[j+1] = a.entries[j];
		a.entries[j+1] = x;
	}
}

static int total_nodes(int n) {
	int level = (n + (ARITY - 1)) / ARITY;

	int total = 0;
	while (level > 1) {
		total += level;
		level = (level + (ARITY - 1)) / ARITY;
	}
	return total + 1;
}

static void initialise(int **segments, int n, Node *tree) {
	int nodes = total_nodes(n);
	int child_nodes = (n + (ARITY - 1)) / ARITY;
	int child_start = nodes - child_nodes;

	// Load leaves
	for (int node = 0; node < child_nodes; node++) {
		for (int j = 0; j < ARITY; j++) {
			int leaf = node * ARITY + j;

			if (leaf < n) {
				tree[child_start + node].entries[j] = {
					.score = *segments[leaf],
					.leaf = leaf,
				};
			} else {
				tree[child_start + node].entries[j] = { 0, 0 };
			}
		}

		sort(tree[child_start + node]);
	}

	// Load internal
	while (child_nodes > 1) {
		int parent_nodes = (child_nodes + (ARITY - 1)) / ARITY;
		int parent_start = child_start - parent_nodes;

		for (int p = 0; p < parent_nodes; p++) {
			for (int j = 0; j < ARITY; j++) {
				int child = p * ARITY + j;

				if (child < child_nodes) {
					tree[parent_start + p].entries[j] = tree[child_start + child].entries[0];
				} else {
					tree[parent_start + p].entries[j] = { 0, 0 };
				}
			}

			sort(tree[parent_start + p]);
		}

		child_nodes = parent_nodes;
		child_start = parent_start;
	}
}

static void sort_partial(Node &a, Entry min) {
	a.entries[0] = min;
	for (int j = 1; j < ARITY; j++) {
		Entry y = a.entries[j];
		a.entries[j - 1] = min.score >= y.score ? min : y;
		min = min.score >= y.score ? y : min;
	}
	a.entries[ARITY - 1] = min;
}

static void replay_games(Node *tree, int child_nodes, int child_start, Entry update) {
	// Leaf
	int node = child_start + update.leaf / ARITY;
	sort_partial(tree[node], update);

	// Internal
	while (node != 0) {
		int parent_nodes = (child_nodes + (ARITY - 1)) / ARITY;
		int parent_start = child_start - parent_nodes;

		int parent = parent_start + (node - child_start) / ARITY;

		sort_partial(tree[parent], tree[node].entries[0]);

		node = parent;
		child_nodes = parent_nodes;
		child_start = parent_start;
	}
}

bool MergeTournament4aryOs::merge(struct test *t, int n) {
	int nodes = total_nodes(n);
	int child_nodes = (n + (ARITY - 1)) / ARITY;
	int child_start = nodes - child_nodes;

	int **segments = (int **)malloc(sizeof(int *) * n);
	Node *tree = (Node *)aligned_alloc(sizeof(Node), sizeof(Node) * nodes);

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

		replay_games(tree, child_nodes, child_start, { .score = *segments[index], .leaf = index });
	}

	return true;
}
