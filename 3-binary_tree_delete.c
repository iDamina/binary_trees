#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: Void.
 *
 * Description: This function recursively deletes the entire binary tree rooted
 * at the given node using a post-order traversal.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);

}
