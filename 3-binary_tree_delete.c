#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree == NULL)
		return;

	node = malloc(sizeof(binary_tree_t));
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	free(tree);
}
