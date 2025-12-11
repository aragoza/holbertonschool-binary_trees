#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is the name for my function
 * @parent: This is the parent
 * @value: This is the value who store n
 * Return: (newnode)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = value;
	newnode->left = NULL;
	newnode->parent = parent;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}

	else
	{
		newnode->right = NULL;
	}
	parent->right = newnode;

	return (newnode);
}
