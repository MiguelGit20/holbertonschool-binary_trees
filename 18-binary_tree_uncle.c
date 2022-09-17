#include "binary_trees.h"
/**
 *binary_tree_uncle - it finds the uncle of a node
 *@node: node to check its uncle
 *Return: the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left != NULL
			&& node->parent != node->parent->parent->left)
		return (node->parent->parent->left);

	else if (node->parent->parent->right != NULL
			&& node->parent != node->parent->parent->right)
		return (node->parent->parent->right);

	else
		return (NULL);
}
