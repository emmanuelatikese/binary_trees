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
	if (!tree || !func)
		return;
	if (tree->left || tree->right)
	{
	func(tree->left->n);
	func(tree->right->n);
	func(tree->parent->n);
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	
}
