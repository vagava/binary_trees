#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a bnary tree is full
 * @tree: the pointer to the node
 * Return: if the tre is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if ((tree->right) && (tree->left))
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));

	return (0);
}
