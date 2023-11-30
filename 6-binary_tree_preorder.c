#include "binary_trees.h"

/**
 * binary_tree_preorder - This does the preorder list
 *
 * @tree: this the parent
 * @func: This is a function pointer
 *
 * Return: returns NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
