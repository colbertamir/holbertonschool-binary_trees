#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree
 * @node: A pointer to the node to check
 *
 * Description: This function determines if a given node in a binary tree is
 *              a leaf node, i.e., it has no children (neither left nor right).
 *
 * Return: If the node is a leaf - returns 1.
 *         Otherwise - returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);

return (1);
}
