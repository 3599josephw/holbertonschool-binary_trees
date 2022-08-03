#include "binary_trees.h"
/**
 * binary_tree_delete - task 3
 * @tree: pointer to the root node of the tree to delete
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
void binary_tree_delete(binary_tree_t *tree) {
    if (tree == NULL) {
        return;
    }

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}