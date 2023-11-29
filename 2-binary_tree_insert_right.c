#include "binary_trees.h"

/**
 * binary_tree_insert_right - This does it job
 *
 * @parent: This is the parent of the tree
 * @value: This is the int value
 * Return: returns pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = malloc(sizeof(binary_tree_t));

	if (ptr == NULL || parent == NULL)
		return (NULL);
	ptr->n = value;
	ptr->parent = parent;
	ptr->right = NULL;
	ptr->left = NULL;

	if (!parent->right)
	{
		parent->right = ptr;
	}
	else
	{
		ptr->right = parent->right;
		parent->right->parent = ptr;
		parent->right = ptr;
	}
	return (ptr);
}
