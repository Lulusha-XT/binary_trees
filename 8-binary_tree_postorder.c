#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree in post-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to function to be called on each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
