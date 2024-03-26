#include "binary_trees.h"

/**
 * max_value - Compares two numbers and returns the maximum value.
 * @fnum: The first number.
 * @snum: The second number.
 *
 * Return: On success, the maximum number.
 */

int max_value(int fnum, int snum)
{
	if (fnum > snum)
		return (fnum);

	return (snum);
}


/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Pointer the root node of binary tree.
 *
 * Return: On success, height of tree. On failure, 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (-1);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (max_value(leftHeight, rightHeight) + 1);
}
