#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to node to check
 *
 * Return: 1 if node is leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->left) && !(node->right))
		leaf = 1;

	return (leaf);
}

/**
 * _is_parent_full - checks if a node is a parent
 * @node: pointer to node to be checked
 * Return: 1 if node is parent, 0 otherwise
 */

int _is_parent_full(const binary_tree_t *node)
{
	int parent = 0;

	if (node && node->left && node->right)
		parent = 1;

	return (parent);
}

#include "binary_trees.h"

/**
 * height - measures binary tree height
 *
 * @tree: root of tree
 * Return: height
 */

int height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_is_perfect - chcks if binary tree is perfect
 * @tree: pointer to the root node of tree to be checked
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}
	return (0);
}
