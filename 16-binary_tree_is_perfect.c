#include "binary_trees.h"

/**
 * balance- Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node.
 *
 * Return: 0 if tree is NULL.
 */

int is_balance(const binary_tree_t *tree)
{
	int lBal, rBal;
	static int counter = 1;

	if (tree == NULL)
		return (0);

	counter++;
	lBal = is_balance(tree->left);
	rBal = is_balance(tree->right);
	counter--;

	if (counter == 1 || tree->parent == NULL)
		return (lBal && rBal);

	if (tree->left && tree->right)
		return (1);
	if (!tree->left && !tree->right)
		return (1);

	return (0);
	/*return (1 + (lHeight > rHeight ? lHeight : rHeight));*/
}

int tree_height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}

/**
 * binary_tree_is_perfect - Checks if Binary tree is perfect.
 * @tree: Pointer to root node of binary tree.
 *
 * Return: On success, 1. Otherwise, 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (is_balance(tree))
	{
		if (tree_height(tree->left) && tree_height(tree->right))
			return (1);
		else
			return (0);
	}

	return (0);
	/*
	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);

	if (tree->parent == NULL)
		return (lh == rh ? 1 : 0);

	if (tree->left && tree->right)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	return (0);
	*/
}
