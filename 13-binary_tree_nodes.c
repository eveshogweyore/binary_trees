#include "binary_trees.h"

/**
 * binary_tree_nodes- Counts all nodes with at least a child.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNode, rightNode;

	if (tree == NULL)
		return (0);

	leftNode = binary_tree_nodes(tree->left);
	rightNode = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (leftNode + rightNode + 1);

	return (leftNode + rightNode);
}
