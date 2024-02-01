#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root of the binary tree.
 * @func: Pointer to a function to call for each node's value.
 *
 * Return: Void.
 *
 * Description: This function traverses the binary tree in pre-order, i.e., it
 * calls the provided function for each node's value before recursively
 * visiting its left and right children.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
