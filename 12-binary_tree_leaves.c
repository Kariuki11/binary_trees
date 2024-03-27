#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_leaf - a function that counts the leaves in a binary tree
=======
 * binary_tree_is_leaf -  function that counts the leaves in a binary tree
>>>>>>> 1c3db40b75498c57aef1abd390192e1adc656e56
 *@node: is a pointer to the node to check.
 * Return: return 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - number of leaves
<<<<<<< HEAD
 *@tree: pointer to the root node of the tree to count the number of leaves.
=======
 *@tree: pointer to root node of the tree to count the number of leaves.
>>>>>>> 1c3db40b75498c57aef1abd390192e1adc656e56
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
<<<<<<< HEAD
			binary_tree_leaves(tree->left));
			binary_tree_leaves(tree->right) +
=======
			binart_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
>>>>>>> 1c3db40b75498c57aef1abd390192e1adc656e56

}
