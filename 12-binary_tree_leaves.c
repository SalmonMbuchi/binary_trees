#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: pointer to root node
 * Return: no. of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree)
	{
		l += (!tree->left && !tree->right) ? 1 : 0;
		l += binary_tree_leaves(tree->left);
		l += binary_tree_leaves(tree->right);
		return (l);
	}
}
