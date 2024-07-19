#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another
 * @parent: Pointer to the node to insert right-child in
 * @value: Value for the new node
 * Return: Pointer to created node, or NULL if it
 *	either fails or parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
