#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to root node
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh, height;

	if (tree)
	{
		/* if condition is true? then value x; otherwise value y */
		lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		height = lh > rh ? lh : rh;

		return (height);
	}
	return (0);
}
