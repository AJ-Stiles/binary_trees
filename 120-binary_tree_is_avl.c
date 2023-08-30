#include "binary_trees.h"

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int is_bst = binary_tree_is_bst(tree);
	int is_balanced = binary_tree_is_balanced(tree);

	return (is_bst && is_balanced);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left != NULL && tree->left->n >= tree->n)
		return (0);

	if (tree->right != NULL && tree->right->n <= tree->n)
		return (0);

	return (binary_tree_is_bst(tree->left) &&
			binary_tree_is_bst(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_balanced - Checks if a binary tree is balanced
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if tree is balanced, 0 otherwise
 */
int binary_tree_is_balanced(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (abs(left_height - right_height) <= 1 &&
			binary_tree_is_balanced(tree->left) &&
			binary_tree_is_balanced(tree->right))
	{
		return (1);
	}

	return (0);
}
