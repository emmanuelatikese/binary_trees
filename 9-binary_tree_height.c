#include "binary_trees.h"

/**
 * binary_tree_height - This check the height of a node
 *
 * @tree: This is the node
 *
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	
	size_t left = 0, right = 0;
	
	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left = 0;
	}

	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right = 0;
	}
	

	return (left > right ? left : right);
}
