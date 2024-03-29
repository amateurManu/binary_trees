#include "binary_trees.h"

/**
 * _is_parent - checks if node is a parent
 * @node: pointer to node to be checked
 * Return: 1 if node is a parent, 0 otherwise
 */

int _is_parent(const binary_tree_t *node)
{
	int parent = 0;

	if (node && (node->left || node->right))
		parent = 1;

	return (parent);
}

/**
 * binary_tree_nodes - counts the number of nodes with at least 1 child
 * @tree: root of tree
 * Return: number of nodes if successful, 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
