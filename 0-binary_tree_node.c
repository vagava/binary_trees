#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *@parent: a ponter pointing to the aprent node
 *@value: the value to be inserted in the node
 *
 *Return: the pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;

	if (parent != NULL)
	{
		node->parent = parent;
	}
	return (node);
}
