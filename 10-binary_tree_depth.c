#include "binary_trees.h"
/**
 * binary_tree_depth - task 10
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree) {
    int count = -1;
    if (tree == NULL) {
        return 0;
    }

    while (tree != NULL) {
        tree = tree->parent;
        count += 1;
    }

    return count;

}