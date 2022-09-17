#include "binary_trees.h"
/**
 *binary_tree_is_perfect - it checks if a binary tree is perfect
 *@tree: pointer to the root node
 *Return: if a tree is perfect or no
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		left = measure_size(tree->left);
		right = measure_size(tree->right);
	}
	if (left == right)
		return (1);

	return (0);
}
/**
 *measure_size - it measures the size of a binary tree
 *@tree: pointer to the root node
 *Return: the size of a binary tree
 */
int measure_size(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (measure_size(tree->left) + measure_size(tree->right) + 1);
}
