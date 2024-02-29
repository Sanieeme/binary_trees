#include "binary_trees.h"
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: NULL or 0;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree)
	{
		i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		j = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((i > j) ? i : j);
	}
	return (0);
}
