#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l = 1 + binary_tree_height(tree->left);
	else
		height_l = 0;

	if (tree->right != NULL)
		height_r = 1 + binary_tree_height(tree->right);
	else
		height_r = 0;

	if (height_l > height_r)
		return (height_l);
	return (height_r);
}
