#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node for a binary tree.
 * @ancestor: A pointer to the parent of the node to be created.
 * @val: The value to be stored in the new node.
 *
 * Return: If memory allocation fails - NULL.
 *         Otherwise - a pointer to the newly created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *ancestor, int val)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = val;
	new_node->parent = ancestor;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
