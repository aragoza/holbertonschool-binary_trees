#include "binary_trees.h"

/**
 * binary_tree_is_leaf - test if the node is a leaf
 *
 * @node: is the node we want to check
 *
 * Return: (1) on success (0) on fail
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
