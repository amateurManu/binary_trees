#include "binary_trees.h"

/**
 * _is_leaf - checks if node is a leaf
 * @node: pointer to node to be checked
 * Return: 1 if node is a leaf, 0 otherwise
 */

int _is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->left) && !(node->right))
		leaf = 1;

	return (leaf);
}

/**
 * binary_tree_leaves - counts number of leaves in a tree
 * @tree: pointer to root node of the tree
 * Return: number of leaves, 0 where tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == 	NULL)
		return (0);

	if (_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
