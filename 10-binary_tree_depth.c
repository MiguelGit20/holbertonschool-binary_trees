#include "binary_trees.h"
/**
 *binary_tree_depth - it measures the depth of a node
 *@tree: pointer to the root node
 *Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent) + 1;
		return (depth);
	}

	return (0);
}
