#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: The size of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
