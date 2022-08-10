#include "binary_trees.h"
/**
 * bst_insert - inserts a value ina Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 */
bst_t *bst_insert(bst_t **tree, int value) {
	if (!tree) {
		return NULL;
	}
	if (!(*tree)) {
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}
	if (value < (*tree)->n) {
		if (!((*tree)->left)) {
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		return (bst_insert(&((*tree)->left), value));
	}
	if (value > (*tree)->n) {
		if (!((*tree)->right)) {
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		return (bst_insert(&((*tree)->right), value));
	}
	return (NULL);

}