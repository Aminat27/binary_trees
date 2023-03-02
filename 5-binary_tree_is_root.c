#include "binary_trees.h"
/**
 * binary_tree_is_root - A function to check if a node is root
 * @node: pointer to the node to check
 *
 * Return: return 1 if node is root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node && node->parent == NULL)
		return (1);
	return (0);
}

