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

	if (!ptr || parent == NULL)
		return (NULL);
	ptr->n = value;
	ptr->parent = parent;
	ptr->right = NULL;
	ptr->left = NULL;

	if (!parent->left)
	{
		parent->left = ptr;
	}
	else
	{
		ptr->left = parent->left;
		parent->left->parent = ptr;
		parent->left = ptr;
	}
	return (ptr);
}
