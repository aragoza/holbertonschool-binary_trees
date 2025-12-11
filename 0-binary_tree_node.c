#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - This is the name for the function
 * @parent: This is the parent
 * @value: This is the value who stores n
 * Return:(tr)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tr;

	tr = malloc(sizeof(binary_tree_t));

	if (tr == NULL)
	{
		printf("erreur\n");
		exit(EXIT_FAILURE);
	}
	tr->n = value;
	tr->left = NULL;
	tr->right = NULL;
	tr->parent = parent;

	return (tr);
}
