#include "binary_trees.h"
/**
 *binary_tree_sibling - it finds the sibling of a node
 *@node: node to check its sibling
 *Return: the sibling of the node
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right != NULL && node != node->parent->right)
		return (node->parent->right);

	else if (node->parent->left != NULL && node != node->parent->left)
		return (node->parent->left);

	else
		return (NULL);
}
