#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst_recursive(tree, NULL, NULL));
}

/**
 * is_bst_recursive - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the current node in the tree
 * @min: Pointer to the minimum allowed value for the node (exclusive)
 * @max: Pointer to the maximum allowed value for the node (exclusive)
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int is_bst_recursive(const binary_tree_t *tree, const int *min, const int *max)
{
	if (tree == NULL)
		return (1);

	if ((min != NULL && tree->n <= *min) || (max != NULL && tree->n >= *max))
		return (0);

	return (is_bst_recursive(tree->left, min, &(tree->n)) &&
			is_bst_recursive(tree->right, &(tree->n), max));
}
