#include "harness.h"

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

static size_t parent(size_t i) {
	return i / 2;
}

static void initialise(int **segments, int n, Node *tree) {
	// Load
	tree[1].entries[0] = Entry{ .score = *segments[0], .leaf = 0 };
	tree[1].entries[1] = Entry{ .score = *segments[1], .leaf = 1 };
	tree[1].entries[2] = Entry{ .score = *segments[2], .leaf = 2 };
	tree[1].entries[3] = Entry{ .score = *segments[3], .leaf = 3 };
	tree[2].entries[0] = Entry{ .score = *segments[4], .leaf = 4 };
	tree[2].entries[1] = Entry{ .score = *segments[5], .leaf = 5 };
	tree[2].entries[2] = Entry{ .score = *segments[6], .leaf = 6 };
	tree[2].entries[3] = Entry{ .score = *segments[7], .leaf = 7 };
	tree[3].entries[0] = Entry{ .score = *segments[8], .leaf = 8 };
	tree[3].entries[1] = Entry{ .score = *segments[9], .leaf = 9 };
	tree[3].entries[2] = Entry{ .score = *segments[10], .leaf = 10 };
	tree[3].entries[3] = Entry{ .score = *segments[11], .leaf = 11 };
	tree[4].entries[0] = Entry{ .score = *segments[12], .leaf = 12 };
	tree[4].entries[1] = Entry{ .score = *segments[13], .leaf = 13 };
	tree[4].entries[2] = Entry{ .score = *segments[14], .leaf = 14 };
	tree[4].entries[3] = Entry{ .score = *segments[15], .leaf = 15 };

	// Sort
	sort(tree[1]);
	sort(tree[2]);
	sort(tree[3]);
	sort(tree[4]);

	// Load
	tree[0].entries[0] = tree[1].entries[0];
	tree[0].entries[1] = tree[2].entries[0];
	tree[0].entries[2] = tree[3].entries[0];
	tree[0].entries[3] = tree[4].entries[0];

	// Sort
	sort(tree[0]);
}

static void replay_games(Node *tree, int pos, int score) {
	// Find
	int i = (5 + pos - 1) / 4;

	// Update
	auto replace = tree[i].entries[0];

	tree[i].entries[0].score = tree[i].entries[0].leaf == pos ? score : tree[i].entries[0].score;
	tree[i].entries[1].score = tree[i].entries[1].leaf == pos ? score : tree[i].entries[1].score;
	tree[i].entries[2].score = tree[i].entries[2].leaf == pos ? score : tree[i].entries[2].score;
	tree[i].entries[3].score = tree[i].entries[3].leaf == pos ? score : tree[i].entries[3].score;

	// Sort
	sort(tree[i]);

	// Promote
	auto promote = tree[i].entries[0];

	tree[0].entries[0].score = tree[0].entries[0].leaf == replace.leaf ? promote.score : tree[0].entries[0].score;
	tree[0].entries[0].leaf = tree[0].entries[0].leaf == replace.leaf ? promote.leaf : tree[0].entries[0].leaf;
	tree[0].entries[1].score = tree[0].entries[1].leaf == replace.leaf ? promote.score : tree[0].entries[1].score;
	tree[0].entries[1].leaf = tree[0].entries[1].leaf == replace.leaf ? promote.leaf : tree[0].entries[1].leaf;
	tree[0].entries[2].score = tree[0].entries[2].leaf == replace.leaf ? promote.score : tree[0].entries[2].score;
	tree[0].entries[2].leaf = tree[0].entries[2].leaf == replace.leaf ? promote.leaf : tree[0].entries[2].leaf;
	tree[0].entries[3].score = tree[0].entries[3].leaf == replace.leaf ? promote.score : tree[0].entries[3].score;
	tree[0].entries[3].leaf = tree[0].entries[3].leaf == replace.leaf ? promote.leaf : tree[0].entries[3].leaf;

	sort(tree[0]);
}

bool MergeTournament4ary::merge(struct test *t, int n) {
	if (n != 16) return false;

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
