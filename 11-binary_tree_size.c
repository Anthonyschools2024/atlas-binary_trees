#include "binary_trees.h"
/**
 * binary_tree_size - maesures the size of a tree
 *@tree: pointer to the root node
 *
 *Return: size of the tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}