#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In pre-order traversal, we visit the root node first, then the
 * left subtree, and finally the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);  /* Call the function on the current node's value */
	binary_tree_preorder(tree->left, func);    /* Traverse left subtree */
	binary_tree_preorder(tree->right, func);   /* Traverse right subtree */
}
