#include "binary_trees.h"
/**
 * binary_tree_is_leaf - A function to check if a node is leaf
 * @node: pointer to the node to check
 *
 * Return: return 1 if node is leaf and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
