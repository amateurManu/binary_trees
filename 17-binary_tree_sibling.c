#include "binary_trees.h"

/**
 * binary_tree_sibling - finds node sibling
 * @node: node to find the sibling
 * Return: pointer to the sibling, if node, parent or sibling is NULL
 * return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
