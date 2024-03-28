#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_complete_recursive(tree, 0, count_nodes(tree));
}

/**
 * is_complete_recursive - Recursive helper function to check completeness.
 * @tree: A pointer to the current node.
 * @index: The index of the current node (starting from 0).
 * @node_count: Total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int is_complete_recursive(const binary_tree_t *tree, int index, int node_count)
{
	if (tree == NULL)
		return (1);

	if (index >= node_count)
		return (0);

	return (is_complete_recursive(tree->left, 2 * index + 1, node_count) &&
			is_complete_recursive(tree->right, 2 * index + 2, node_count));
}

/**
 * count_nodes - Counts the total number of nodes in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The total number of nodes.
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
