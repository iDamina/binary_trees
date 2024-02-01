#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: The number of nodes with at least 1 child in the binary tree,
 *         or 0 if the tree is NULL..
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	return (0);
}