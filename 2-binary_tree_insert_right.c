#include "binary_trees.h"
/**
* binary_tree_insert_right- insert the node to right
* @parent: pointer to parent
* @value: value of node
* Return: pointer to new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->parent = parent;
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;

	return (node);
}
