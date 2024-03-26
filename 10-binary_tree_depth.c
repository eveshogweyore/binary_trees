#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: On success, depth of node. On failure, 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tmp = tree;
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tmp->parent)
	{
		tmp = tmp->parent;
		depth++;
	}

	return (depth);
}
