#include "binary_trees.h"

/**
 * binary_tree_size - This check the size
 * @tree: the node to be used
 * Return: size_t or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	return (0);
}
