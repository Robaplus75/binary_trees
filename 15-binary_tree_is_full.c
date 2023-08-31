#include "binary_trees.h"

/**
 * binary_tree_is_full - func for checking if the binary tree is full
 * @tree: pointer to root node
 * Return: 1 for full, 0 for else.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
/* tree checker*/
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

/* checks if its full or not */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
