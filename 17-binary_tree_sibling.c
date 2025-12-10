#include "binary_trees.h"

/**
 * binary_tree_sibling - search for the sibling of a node
 *
 * @tree: Pointer to the node to find the siblings
 *
 * Return: The sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

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
