#include "binary_trees.h"
/**
 *binary_tree_inorder - it traverses a binary tree using the order traversal
 *@tree: pointer to the root node
 *@func: pointer to a function to print each node
 *Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
