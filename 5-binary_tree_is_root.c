#include "binary_trees.h"

/**
 * binary_tree_is_root - Function checks if a node is a root
 * @node: pointer to the node to be checked
 * Return: 1 if node is root or 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
