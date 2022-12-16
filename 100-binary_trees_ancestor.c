#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: least common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent1, *parent2;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	parent1 = first->parent;
	parent2 = second->parent;

	if (first == parent2 || parent1 == NULL ||
		(parent1->parent == NULL && parent2))
		return (binary_trees_ancestor(first, parent2));
	else if (parent1 == second || parent2 == NULL ||
		(parent2->parent == NULL && parent1))
		return (binary_trees_ancestor(parent1, second));
	return (binary_trees_ancestor(parent1, parent2));
}
