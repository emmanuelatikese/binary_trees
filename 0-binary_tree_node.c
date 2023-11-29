#include "binary_trees.h"

/**
 * binary_tree_node - This create a new parent
 *
 * @parent: This is the parent node
 * @value: This is the value int
 *
 * Return: This return node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = malloc(sizeof(binary_tree_t));

	if (!ptr)
		return (NULL);

	ptr->parent = parent;
	ptr->n = value;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
