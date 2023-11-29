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
	if (parent == NULL)
		return (NULL);

	if (!ptr)
		return (NULL);
	binary_tree_t *tmp = parent->left;

	ptr->n = value;
	ptr->parent = NULL;
	ptr->right = NULL;
	ptr->left = NULL;

	if (tmp == NULL)
	{
		parent->left = ptr;
		ptr->parent = parent;
	}
	else
	{
		ptr->parent = tmp->parent;
		tmp->parent->left = ptr;
		ptr->left = tmp;
		tmp->parent = ptr;
	}
	return (ptr);
}
