#include "binary_trees.h"

/**
 * binary_tree_sibling - func for searching sibliing of node
 * @node: pointer to the ndoe
 * Return: pinter to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
/* checks if one of them is null */
	if (!node || !node->parent)
		return (NULL);
/* searches the sibling */
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
