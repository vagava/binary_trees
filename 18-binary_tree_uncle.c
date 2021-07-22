#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the pointer to the node
 * Return: the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *abuelo = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	abuelo = node->parent->parent;
	if (!abuelo->left || !abuelo->right)
		return (NULL);
	if (abuelo->left->n == node->parent->n)
		return (abuelo->right);
	return (abuelo->left);
}
