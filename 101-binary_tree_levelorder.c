#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In level-order traversal, we visit all nodes at the current level
 * before moving on to the nodes at the next level.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	int front = 0, rear = 0;
	const binary_tree_t *queue[1024];  // Maximum size for demonstration

	queue[rear++] = tree;

	while (front < rear)
	{
		const binary_tree_t *node = queue[front++];
		func(node->n);

		if (node->left != NULL)
			queue[rear++] = node->left;
		if (node->right != NULL)
			queue[rear++] = node->right;
	}
}
