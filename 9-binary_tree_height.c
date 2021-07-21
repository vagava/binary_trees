#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: rhe size of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
