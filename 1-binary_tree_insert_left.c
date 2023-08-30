#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function for adding left child.
 * @parent: Pointer to the node
 * @value: value to be stored
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);
/* llocating space for n_node*/
	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
/* right and left nodes*/
	n_node->right = NULL;
	n_node->left = NULL;

	if (parent->left != NULL)
	{
		n_node->left = parent->left;
		n_node->left->parent = n_node;
	}
/* setting left node */
	parent->left = n_node;

	return (n_node);
}
