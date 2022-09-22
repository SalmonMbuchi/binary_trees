#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to root node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l, r, total;

		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);

		total = l + r;

		return (total + 1);
	}
	return (0);
}
