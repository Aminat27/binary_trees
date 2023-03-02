#include "binary_trees.h"

/**
 * binary_tree_postorder - display left, right and finally root;
 * @tree: pointer to the root node of the tree to transverse
 * @func: pointer to function who takes as parameter the value in the node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
