#include "binary_trees.h"
/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elements in the array
 */
bst_t *array_to_bst(int *array, size_t size) {

	bst_t *root;

	root = NULL;
	for (size_t i = 0; i < size; i++) {
		bst_insert(&root, array[i]);
	}
	return (root);
}