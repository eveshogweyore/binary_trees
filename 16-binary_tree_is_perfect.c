#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if Binary tree is perfect.
 * @tree: Pointer to root node of binary tree.
 *
 * Return: On success, 1. Otherwise, 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_is_perfect(tree->left);
	rh = binary_tree_is_perfect(tree->right);

	if (tree->parent == NULL && lh == rh)
		return (1);

	if (tree->parent == NULL && lh != rh)
		return (0);

	return (1 + (lh > rh ? lh : rh));
}
