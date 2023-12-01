#include "binary_trees.h"

/**
 * binary_tree_depth - This check the depth
 * @tree: this is the node
 *
 * Return: size_t or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t c_depth = -1;

		while (tree)
		{
			c_depth++;
			tree = tree->parent;
		}
		return (c_depth);
	}
	return (0);
}
