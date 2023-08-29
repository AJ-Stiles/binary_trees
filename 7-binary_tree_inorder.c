#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In in-order traversal, we visit the left subtree first, then the
 * root node, and finally the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);     /* Traverse left subtree */
	func(tree->n);                             /* Call the function on the current node's value */
	binary_tree_inorder(tree->right, func);    /* Traverse right subtree */
}
