#include "binary_trees.h"

/**
 * binary_tree_balance
 * 
 * 
 * 
 */
size_t altura(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((altura(tree->left)) - (altura(tree->right)));
}

/**
* _height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: rhe size of tree
*/
size_t altura(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = altura(tree->left) + 1;
	else
		left_height = 1;
	if (tree->right)
		right_height = altura(tree->right) + 1;
	else
		right_height = 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
