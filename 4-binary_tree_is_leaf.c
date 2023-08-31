#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if the node is leaf
 * @node: pointer to the node
 * Return: 1 if its leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
/*leaf checker*/
	if (node && !node->left && !node->right)
		return (1);

	return (0);
}
