#include "binary_trees.h"

/**
 * binary_tree_postorder - This does in postorder
 *
 * @tree: This is the parent node
 * @func: This is a pointer function parameter
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);

		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
