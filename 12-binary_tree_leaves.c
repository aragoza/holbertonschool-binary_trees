#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root
 *
 * Return: (Number of leaf)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_l = 0;
	size_t leaves_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		leaves_l = binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		leaves_r = binary_tree_leaves(tree->right);

	return (leaves_l + leaves_r);
}
