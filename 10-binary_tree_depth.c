#include "binary_trees.h"

/**
 * get_tree_depth - recursive function to estimate the height of a tree
 * @tree: root of the tree
 *
 * Return: estimate of the height else 0
 */
size_t get_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (get_tree_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - recursive function to estimate the height of a tree
 * @tree: root of the tree
 *
 * Return: height of the height else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (get_tree_depth(tree));
}
