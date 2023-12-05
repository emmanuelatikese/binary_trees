#include "binary_trees.h"

/**
 * binary_tree_nodes - count the children of a node
 * @tree: the only parameter needed
 * return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree)
	{
		if (tree->left && tree->right)
			i += 3;
		else if (tree->left || tree->right)
			i += 1;
	}
	return (i);
}
