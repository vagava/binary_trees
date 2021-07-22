#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: the size or o if it is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return ((left) + (right) + 1);
}
