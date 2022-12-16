#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node whose uncle is to be searched
 * Return: Pointer to uncle or NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->right)
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
		else
			return (NULL);
	}
	else if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		else
			return (NULL);
	}
	return (NULL);
}
