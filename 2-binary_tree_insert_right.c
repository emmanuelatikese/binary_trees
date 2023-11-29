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
        binary_tree_t *tmp = parent->right;

        ptr->n = value;
        ptr->parent = NULL;
        ptr->right = NULL;
        ptr->left = NULL;

        if (tmp  == NULL)
        {
                parent->right = ptr;
                ptr->parent = parent;
        }
	else
	{
		ptr->parent = tmp->parent;
		tmp->parent->right = ptr;
		ptr->right = tmp;
		tmp->parent = ptr;
	}
	return (parent);
}
