#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root of tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree) {
    int d = depth(tree);

    return (is_perfect(tree, d, 0));
}

int is_perfect(const binary_tree_t *tree, int d, int level) {
    if (tree == NULL) {
        return 0;
    }

    if (tree->left == NULL && tree->right == NULL) {
        return (d == level + 1);
    }

    if (tree->left == NULL || tree->right == NULL) {
        return 0;
    }

    return (is_perfect(tree->left, d, level + 1) && is_perfect(tree->right, d, level + 1));

}

int depth(const binary_tree_t *node) {
    int d = 0;
    while (node != NULL) {
        d++;
        node = node->left;
    }
    return d;
}