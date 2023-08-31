#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node
 * Return: depth of node, 0 on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		d += 1 + binary_tree_depth(tree->parent);
	return (d);
}
