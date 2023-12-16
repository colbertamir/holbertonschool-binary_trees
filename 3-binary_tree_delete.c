#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to be deleted
 *
 * Description: This function recursively deletes the entire binary tree
 *              starting from the specified root node. It first goes to the
 *              left subtree, then to the right subtree, and finally frees the
 *              memory allocated for each node, including the root node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
}
