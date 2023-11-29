#include "binary_trees.h"

/**
 * binary_tree_insert_left - This does it job
 *
 * @parent: This is the parent of the tree
 * @value: This is the int value
 * Return: returns pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = malloc(sizeof(binary_tree_t));

	if (ptr == NULL || parent == NULL)
		return (NULL);
	binary_tree_t *tmp = parent->left;

	ptr->n = value;
	ptr->parent = NULL;
	ptr->right = NULL;
	ptr->left = NULL;

	if (parent->left == NULL)
	{
		parent->left = ptr;
		ptr->parent = parent;
		return (parent);
	}

	while (tmp != NULL)
	{
		if (ptr->n > tmp->n)
		{
			ptr->parent = tmp->parent;
			tmp->parent->left = ptr;
			tmp->parent = ptr;
			ptr->left = tmp;
			return (parent);
		}

		else if (tmp->left == NULL)
		{
			tmp->left = ptr;
			ptr->parent = tmp;
			return (parent);
		}
	}
	return (parent);
}
