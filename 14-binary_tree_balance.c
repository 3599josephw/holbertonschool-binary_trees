#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree) {
    int left;
    int right;

    if (tree == NULL) {
        return 0;
    }

    left = binary_tree_balance(tree->left);

    if (left == -1) {
        return -1;
    }

    right = binary_tree_balance(tree->right);

    if (right == -1) {
        return -1;
    }

    if (abs(left - right) > 1) {
        return -1;
    }
    return max(left, right) + 1;
}

/**
 * max - find max between two numbers
 * @num1: number one
 * @num2: number two
 * Return: the max
 */
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}