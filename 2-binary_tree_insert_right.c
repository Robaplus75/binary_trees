#include "binary_trees.h"

/**
 * binary_tree_insert_right - function for insterting rightchild
 * @parent: pointer to the parent node
 * @value: value to be stored in the node
 * Return: Pointer to the node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;
/* checks if it is null or not */
	if (parent == NULL || value == '\0')
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
/* setting left and right to null */
	n_node->right = NULL;
	n_node->left = NULL;

	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		n_node->right->parent = n_node;
	}
/* setting new node */
	parent->right = n_node;

	return (n_node);
}
