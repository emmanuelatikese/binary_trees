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
	size_t l_node = 0, r_node = 0;

	if (tree)
	{
		l_node = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
		r_node = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;

		return (l_node > r_node ? l_node : r_node);
	}

	return (0);
}
