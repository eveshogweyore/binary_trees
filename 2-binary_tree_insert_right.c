#include "binary_trees.h"

/**
 * binary_tree_insert_right- The node to insert at thee right.
 * @parent: The pointer to the parent node of the right.
 * @value: The value of the right node
 *
 * Return: A pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);

	rightNode = malloc(sizeof(binary_tree_t));

	if (rightNode == NULL)
		return (NULL);

	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->left = NULL;
	rightNode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = rightNode;

	parent->right = rightNode;

	return (rightNode);
}
