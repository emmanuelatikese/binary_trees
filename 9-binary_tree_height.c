#include "binary_trees.h"

/**
 * binary_tree_height - This check the height of a node
 *
 * @tree: This is the node
 *
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t n1 = 0;
	size_t n2 = 0;

	binary_tree_t *l = tree->left;
	binary_tree_t *r = tree->right;

	while (r || l)
	{
		if (l)
		{
			n1++;
			l = l->left;
		}

		if (r)
		{
			n2++;
			r = r->right;
		}
	}
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}
