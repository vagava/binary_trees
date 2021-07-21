#include "binary_trees.h"
/**
* binary_tree_insert_left - insert the node to left
* @parent: pointer to parent
* @value: value of node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->right = NULL;
	node->parent = parent;
	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;

	return (node);
}
