#include "binary_trees.h"

/**
 * binary_tree_balance
 * 
 * 
 * 
 */
size_t _height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	if (!tree)
		return (0);

	left = _height(tree->left);
	right = _height(tree->right);
	return (left - right);
}

/**
* _height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: rhe size of tree
*/
size_t _height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = _height(tree->left);
	right = _height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
