#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a node in binary tree at insert in right
 * @parent: binary tree
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = calloc(1, sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
