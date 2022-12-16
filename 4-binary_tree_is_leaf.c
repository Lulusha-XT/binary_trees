#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function checks if a node is a leaf
 * @node: pointer to the node to be checked
 * Return: 1 if node is a leaf or 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	else
		return (1);
}
