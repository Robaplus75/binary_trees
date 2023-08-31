#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if node is root
 * @node: pointer to node
 * Return: 1 if its root, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
/* root checker */
	if (node && !node->parent)
		return (1);

	return (0);
}
