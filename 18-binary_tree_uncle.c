#include "binary_trees.h"

/**
 * binary_tree_uncle- Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle
 *
 * Return: NULL if the node is null and if no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandParent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandParent = node->parent->parent;

	if (grandParent->right == parent)
		return (grandParent->left);
	return (grandParent->right);
}
