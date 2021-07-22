#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the node
 *
 * Return: the number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return ((left) + (right) + 1);
}
