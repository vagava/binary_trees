#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: the level depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int idx = 0;

	if (!tree || !tree->parent)
		return (0);
	idx = binary_tree_depth(tree->parent);
	return (idx + 1);
}
