#include "binary_trees.h"

/**
 * binary_tree_inorder - function to transverse the left, display it, and then
 * tranverse the right
 * @tree: pointer to the root node of the tree to transverse
 * @func: pointer to function who takes as parameter the value in the node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
