#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 *
 * Prototype:
 * void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Does nothing if tree or func is NULL.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
