#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 *
 * Description: This function checks if a given node is a leaf in a binary tree
 * A leaf is a node with no children (both left and right pointers are NULL).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
