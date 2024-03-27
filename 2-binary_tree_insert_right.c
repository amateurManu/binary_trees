#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right child leaf to a node
 * @parent: parent node
 * value: node value
 * Return: pointer to new node, NULL if unsuccessful
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = parent->right;

	if (parent->right != NULL)
		Pparent->right->parent = new;

	parent->right = new;

	return (new);
}
