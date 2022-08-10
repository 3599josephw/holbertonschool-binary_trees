#include "binary_trees.h"
/**
 * binary_tree_is_bst - finds the uncle of a node
 * @tree: pointer to the node of the tree
 * Return: 1 if valid, else 0
*/
int binary_tree_is_bst(const binary_tree_t *tree) {
	if (!tree) {
		return 0;
	}
	return (isBST(tree, INT_MIN, INT_MAX));
}

int isBST(const binary_tree_t *tree, int min, int max) {
	if (!tree) {
		return 1;
	}

	if (tree->n < min || tree->n > max) {
		return 0;
	}

	return (isBST(tree->left, min, tree->n - 1) && isBST(tree->right, tree->n + 1, max));
}