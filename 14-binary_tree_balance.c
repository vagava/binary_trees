#include "binary_trees.h"

size_t altura(const binary_tree_t *tree);
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
	return ((altura(tree->left)) - (altura(tree->right)));
}

/**
* altura - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the size of tree
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
