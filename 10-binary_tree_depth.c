#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Description: This function measures the depth of a node in a binary tree,
 *              which is the distance between the given node and the tree's
 *              root node. It recursively traverses the parent nodes until
 *              reaching the root node.
 *
 * Return: If tree is NULL or if the node has no parent,
 * the function returns 0.
 *
 * Otherwise, it returns the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
