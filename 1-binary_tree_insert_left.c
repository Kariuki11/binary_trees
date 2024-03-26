#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the node to insert the left child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NULL;
	if (parent == NULL)
			return (NULL);
	
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
			return (NULL);
	
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
		parent->left = node;
	else
    {
		parent->left = node
        node->left = parent->left;
		node->left->parent = new_node;
    }
	return new_node;
}
