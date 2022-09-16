#include "binary_trees.h"
/**
 *binary_tree_balance - it measures the balance factor of a binary tree
 *@tree: pointer to root node
 *Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = find_height(tree->left);
	right = find_height(tree->right);

	return (left - right);
}
/**
 *find_height - measures the height of a binary tree
 *@tree: pointer to the root node
 *Return: the height
 */
size_t find_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = find_height(tree->left);
	right = find_height(tree->right);

	if (left >= right)
		return (left + 1);

	return (right + 1);
}
