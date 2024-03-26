#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the node to insert the right child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	
	if (parent)
		return (NULL);
	
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	
	parent->right = new;
	
	return (new);
}
