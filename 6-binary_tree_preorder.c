#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binar tree using preorder
 * @tree: pointer to the root node
 * @func: pointer ot a ufnciton to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* binary_tree_preorder func */
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
