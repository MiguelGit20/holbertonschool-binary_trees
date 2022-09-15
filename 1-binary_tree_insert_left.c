#include "binary_trees.h"
/**
 *binary_tree_insert_left - it inserts a node as the left-child
 *@parent: pointer to a node to insert the new node
 *@value: value of the node
 *Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (!newnode)
		return (NULL);

	newnode->n = value;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;

	return (newnode);
}
