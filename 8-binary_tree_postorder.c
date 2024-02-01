#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order
 * traversal
 * @tree: Pointer to the root of the binary tree.
 * @func: Pointer to a function to call for each node's value.
 *
 * Return: Void.
 *
 * Description: This function traverses the binary tree in post-order, i.e.,
 * it recursively visits the left and right subtrees before calling the 
 * provided function for the current node's value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
