#include "binary_trees.h"
/**
 * binary_tree_node - task 0
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

    if (!tmp)
    {
        return (NULL);
    }
    if (parent == NULL) {
        tmp->parent = NULL;
    } else {
        tmp->parent = parent;
    }

    tmp->n = value;
    tmp->left = NULL;
    tmp->right = NULL;

    return (tmp);

}