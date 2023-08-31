#include "binary_trees.h"

/**
 * binary_tree_height - measuers hight of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree, 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_size = 0;
	size_t r_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		r_size += 1 + binary_tree_height(tree->right);

	if (l_size > r_size)
		return (l_size);
	else
		return (r_size);
}
