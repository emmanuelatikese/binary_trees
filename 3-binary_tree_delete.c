#include "binary_trees.h"

/**
 * binary_tree_delete - This delete the tree
 *
 * @tree: This is the binary tree
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	free(tree);
	return;
}
