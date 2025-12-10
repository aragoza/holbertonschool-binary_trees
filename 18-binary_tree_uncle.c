#include "binary_trees.h"

/**
 * binary_tree_uncle - search for the uncle of a node
 *
 * @tree: Pointer to the node to find the siblings
 *
 * Return: The uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	node = node->parent;

	if (node == node->parent->left)
	{
		if (node->parent->right == NULL)
			return (NULL);

		return (node->parent->right);
	}

	if (node == node->parent->right)
	{
		if (node->parent->left == NULL)
			return (NULL);

		return (node->parent->left);
	}
}
