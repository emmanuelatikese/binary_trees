#include "binary_trees.h"

/**
 * binary_tree_nodes - count the children of a node
 * @tree: the only parameter needed
 * Return:size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree)
	{
		i += tree->left && tree->right ? 1 : 0;;
		i += tree->right ? 1 : 0;
		i += tree->left ? 1 : 0;
	}
	return (i);
}
