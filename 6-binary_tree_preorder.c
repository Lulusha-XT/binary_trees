#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree in pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to function to be called on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
