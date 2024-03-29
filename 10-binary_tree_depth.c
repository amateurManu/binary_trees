#include "binary_trees.h"

/**
 * recursive_depth - measures depth in a binary tree
 * @tree: root of tree
 * Return: depth of the node in a tree
 */

size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - returns the depth of a tree by calling recursive_depth
 *
 * @tree: root of tree
 * Return: depth of tree on success, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
