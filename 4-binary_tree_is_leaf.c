#include "binary_trees.h"
/**
 *binary_tree_is_leaf - it chehck if a node is a leaf
 *@node: node to check
 *Return: 1 on succes or 0 on failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
