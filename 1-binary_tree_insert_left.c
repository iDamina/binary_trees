#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Return: pointer to the newly created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
