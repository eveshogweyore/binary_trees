#include "binary_trees.h"


size_t max_value(size_t fnum, size_t snum)
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
	size_t leftHeight, rightHeight; 

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (max_value(leftHeight, rightHeight) + 1);
}
