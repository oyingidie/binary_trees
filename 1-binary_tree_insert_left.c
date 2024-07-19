#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as left-child of another
 * @parent: Pointer to the node to insert left-child in
 * @value: New node value
 *
 * Return: Pointer to created node, or NULL if it
 *	either fails or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
