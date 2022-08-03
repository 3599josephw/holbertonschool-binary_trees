#include "binary_trees.h"
/**
 * binary_tree_insert_left - task 0
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

    if (parent == NULL || !newNode) {
        return NULL;
    }

    newNode->n = value;
    newNode->parent = parent;
    newNode->right = NULL;
    newNode->left = NULL;

    if (!(parent->right)) {
        parent->right = newNode;
    } else {
       newNode->n = parent->right->n;
       parent->right->n = value;
       parent->right->right = newNode;
       newNode->parent = parent->right;
    }

    return newNode;
}