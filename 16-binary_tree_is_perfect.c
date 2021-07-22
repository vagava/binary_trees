#include "binary_trees.h"
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if tree is not perfect, 1 if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (_height(tree->left) == _height(tree->right))
	{
		if (binary_tree_is_full(tree->left) == 1 &&
		    binary_tree_is_full(tree->right) == 1)
			return (1);
	}
	return (0);

}
