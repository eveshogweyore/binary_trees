#include "binary_trees.h"

/**
 * binary_tree_insert_left- Inserts a subtree to the left node.
 * @parent: The pointer to the parent node of the left node.
 * @value: The value of the left node.
 *
 * Return: A pointer to the created node, or NULL on failure
 *	   or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (leftNode == NULL)
		return (NULL);

	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = parent->left;
	leftNode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = leftNode;

	parent->left = leftNode;

	return (leftNode);
}
