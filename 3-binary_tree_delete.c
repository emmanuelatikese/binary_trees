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
	binary_tree_t *tmp1 = tree->left;
	binary_tree_t *tmp2 = tree->right;
	binary_tree_t *a;
	binary_tree_t *b;

	while (tmp1 != NULL || tmp2 != NULL)
	{
		if (tmp1 != NULL)
		{
			a = tmp1;
			tmp1 = tmp1->left;
			free(a);
		}

		if (tmp2 != NULL)
		{
			b = tmp2;
			tmp2 = tmp2->right;
			free(b);
		}
	}
	return;
}
