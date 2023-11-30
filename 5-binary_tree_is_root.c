#include "binary_trees.h"

/**
 * binary_tree_is_root - this check if node is parent
 * @node: This node is a parementer
 *
 * Return: returns 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
