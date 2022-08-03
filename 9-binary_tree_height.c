#include "binary_trees.h"
/**
 * binary_tree_height - task 9
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree) {

    int leftDepth;
    int rightDepth;

    if (tree == NULL) {
        return -1;
    }

    leftDepth = binary_tree_height(tree->left);
    rightDepth = binary_tree_height(tree->right);

    if (leftDepth > rightDepth) {
        return (leftDepth + 1);
    } else {
        return (rightDepth + 1);
    }
}