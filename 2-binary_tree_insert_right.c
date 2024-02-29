#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the child in
 * @value: value to store in the new node
 * Return: NULL or node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);

	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}
