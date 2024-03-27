#include "binary_trees.h"

/**
 * recursive_height - measures binary tree height
 *
 * @tree: root of tree
 * Return: height
 */

size_t recursive_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

		if (tree == NULL)
			return (0);

	left = recursive_height(tree->left);
	right = recursive_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_height - calls recursive_height
 *
 * @tree: root of the tree
 * Return: height of tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_height(tree) - 1);
}
