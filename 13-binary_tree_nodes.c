#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to root node
 * Return: no. of nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l, r;

		if (tree->left == NULL && tree->right == NULL)
			return (0);
		else
		{
			l = tree->left ? 1 + binary_tree_nodes(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_nodes(tree->right) : 0;

			return (l + r);
		}
	}
	return (0);
}
