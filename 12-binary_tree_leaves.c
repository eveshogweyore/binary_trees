#include "binary_trees.h"

/**
 * binary_tree_leaves- counts leaves in the binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafLeft, leafRight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leafLeft = binary_tree_leaves(tree->left);
	leafRight = binary_tree_leaves(tree->right);

	return (leafLeft + leafRight);
}
