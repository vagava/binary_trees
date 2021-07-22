#include "binary_trees.h"
/**
 * depth - depth of tree
 * @tree: pointer to tree
 * Return: the depth of tree
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
/**
 * is_perfect - checks if perfect
 * @tree: pointer to tree
 * @d: depth of tree
 * @level: level of node
 * Return: 1 or 0.
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		if (d == level + 1)
			return (1);
		return (0);
	}

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if tree is not perfect, 1 if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0;

	d = depth(tree);
	return (is_perfect(tree, d, 0));
}
