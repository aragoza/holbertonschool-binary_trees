#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This is the name for my function
 * @parent: This is the parent
 * @value: This is the value who store n
 * Return: (newnode)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	else
	{
		newnode->left = NULL;
	}

	parent->left = newnode;


	return (newnode);

}
