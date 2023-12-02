#include "binary_trees.h"

/**
 * binary_tree_leaves - This check if it a leave
 * @tree: This is a paramter
 *
 * Return: returns 0 or size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left && tree->right)
			return (2);
		else if (tree->left || tree->right)
			return (1);
		else
			return (1);
	}
	return (0);
}
