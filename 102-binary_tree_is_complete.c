#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int nodes_count = binary_tree_size(tree);

	return (is_complete_recursive(tree, 0, nodes_count));
}

/**
 * is_complete_recursive - Helper function to check if a binarytree is complete
 * @tree: Pointer to the current node in the tree
 * @index: Index of the current node
 * @nodes_count: Total number of nodes in the tree
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int is_complete_recursive(const binary_tree_t *tree,
		int index, int nodes_count)
{
	if (tree == NULL)
		return (1);

	if (index >= nodes_count)
		return (0);

	return (is_complete_recursive(tree->left, 2 * index + 1, nodes_count) &&
			is_complete_recursive(tree->right, 2 * index + 2, nodes_count));
}
