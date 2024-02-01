#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: Pointer to the root of the binary tree.
 * @func: Pointer to a function to call for each node's value.
 *
 * Return: Void.
 *
 * Description: This function traverses the binary tree in in-order, i.e., it
 * recursively visits the left subtree, calls the provided function for the
 * current node's value, and then recursively visits the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
