#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 *
 * Description: function that checks if a given node is root in a binary tree
 * A root is a node with no parent (parent pointer is NULL).
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
