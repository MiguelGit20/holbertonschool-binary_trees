#include "binary_trees.h"
/**
 *binary_tree_insert_right - it inserts a node as the right-child
 *@parent: pointer to the node to insert the new node
 *@value: value of the newnode
 *Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (!newnode)
		return (NULL);

	newnode->n = value;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}
