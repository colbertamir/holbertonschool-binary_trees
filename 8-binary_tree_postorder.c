#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function performs a post-order traversal of a binary tree,
 *              visiting each node and applying a specific function to the
 *              value of each node.
 *
 *              The function pointer `func` should point to a function that
 *              takes an integer argument and performs a specific action.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
