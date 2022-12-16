#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with atleast 1 child
 * @tree: pointer to the root node of the tree
 * Return: Number of nodes with atleast 1 child or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
