#include "binary_trees.h"

/**
 * binary_tree_nodes - count the children of a node
 * @tree: the only parameter needed
 * return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->right || tree->left))
	{
		if (tree->left && tree->right)
			return (3);
		else if (tree->left || tree->right)
			return (1);
	}
	return (0);
}
