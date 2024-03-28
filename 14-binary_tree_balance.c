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
 * binary_tree_balance- Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;
	static int counter = 1;

	if (tree == NULL)
		return (0);

	counter++;
	leftHeight = binary_tree_balance(tree->left);
	rightHeight = binary_tree_balance(tree->right);
	counter--;

	if (counter == 1 || tree->parent == NULL)
		return (leftHeight - rightHeight);

	return (max_value(leftHeight, rightHeight) + 1);
}
