#include "binary_trees.h"

/**
 * binary_trees_ancestor - Check for the lowest common ancestor.
 * @first: First node in binary tree.
 * @second: Second node in binary tree.
 *
 * Return: On success, lowest common ancestor. Otherwise, NULL.
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second
)
{
	binary_tree_t *first_copy = (binary_tree_t *)first;
	binary_tree_t *second_copy;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first_copy)
	{
		second_copy = (binary_tree_t *)second;

		while (second_copy)
		{
			if (first_copy == second_copy)
				return (first_copy);

			second_copy = second_copy->parent;
		}

		first_copy = first_copy->parent;
	}

	return (NULL);
}
