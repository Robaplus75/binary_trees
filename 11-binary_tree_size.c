#include "binary_trees.h"

/**
 * binary_tree_size - func for measuring size of binary tree
 * @tree: pointer to the root node
 * Return: size of binarytree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (!tree)
		return (0);

	s += binary_tree_size(tree->right);
	s += binary_tree_size(tree->left);

	return (s);
}
