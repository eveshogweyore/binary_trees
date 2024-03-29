#include "binary_trees.h"

/**
 * binary_tree_sibling- Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: NULL if node is NULL or the parent is NULL,and
 *	   if node has no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node != NULL)
		parent = node->parent;

	if (node == NULL || parent == NULL)
		return (NULL);
	
	if (node == NULL || node->parent == NULL || node->parent->left == NULL
			|| node->parent->right == NULL)
        	return NULL;

	if (node == node->parent->left)
        	return node->parent->right;
    	else
        	return node->parent->left;
}
