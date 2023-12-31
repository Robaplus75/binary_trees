#include "binary_trees.h"

/**
 * binary_tree_leaves - func for counting learves in binarytree
 * @tree: pointer to the root node
 * Return: number of leafs
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaf += 1;

	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);

	return (leaf);
}
