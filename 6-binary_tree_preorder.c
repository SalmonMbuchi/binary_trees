#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal
 * @tree: pointer to the root node
 * @func: pointer to a function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
