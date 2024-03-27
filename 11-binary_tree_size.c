#include "binary_trees.h"

/**
 * binary_tree_size- The size of the binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree  is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize;

	if (tree == NULL)
		return (0);

	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	return (leftSize + rightSize + 1);
}
