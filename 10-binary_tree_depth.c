#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to node
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t lp, rp;

	if (tree)
	{
		lp = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		rp = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

		return (lp > rp ? lp : rp);
	}
	return (0);
}
