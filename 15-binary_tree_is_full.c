#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}