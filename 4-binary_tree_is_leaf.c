#include "binary_trees.h"

/**
 * binary_tree_is_leaf - It checks if a node is a leaf.
 *
 * Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
 * @node: A pointer to the node to check.
 *
 * Return: 0 if the node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
