#include "binary_trees.h"
/**
 *binary_tree_node - it creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value of the node
 *Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;

	if (!parent)
	{
		parent = newnode;
	}
	if (parent != NULL)
	{
		newnode->parent = parent;
		newnode->right = NULL;
		newnode->left = NULL;
		return (newnode);
	}

	return (NULL);
}
