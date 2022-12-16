#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree in in-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to function to be called on each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
