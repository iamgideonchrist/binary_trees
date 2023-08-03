#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 *
 * Prototype: int binary_tree_is_root(const binary_tree_t *node);
 * @node: A pointer to the node to check.
 *
 * Return: 0 if the node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
