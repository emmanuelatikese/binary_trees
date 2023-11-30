#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This check if node is a leaf
 *
 * @node: This is the node to use
 *
 * Return: returns 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	else
		return (1);
}
