#include "binary_trees.h"

size_t _height(const binary_tree_t *tree);
/**
 * binary_tree_balance - check if a tree is balanced
 * @tree: pointer to the node
 *
 * Return: the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((_height(tree->left)) - (_height(tree->right)));
}

/**
* _height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the size of tree
*/
size_t _height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = _height(tree->left) + 1;
	else
		left = 1;
	if (tree->right)
		right = _height(tree->right) + 1;
	else
		right = 1;
	if (left > right)
		return (left);
	else
		return (right);
}
