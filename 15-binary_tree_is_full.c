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

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node of tree to check
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (1);

	if (_is_parent_full(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
