#include "binary_trees.h"

/**
 * binary_tree_nodes - func for counting nodes with atleaset 1 child
 * @tree: pointer to root node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_node = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		num_node += 1;

	num_node += binary_tree_nodes(tree->right);
	num_node += binary_tree_nodes(tree->left);

	return (num_node);
}
