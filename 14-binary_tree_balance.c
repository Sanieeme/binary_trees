#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - fuction that measures the height of the binary tree
 * @tree: pointer
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight,  rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return (1 + (lheight > rheight ? lheight : rheight));
}
