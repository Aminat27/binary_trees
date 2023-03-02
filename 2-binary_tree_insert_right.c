#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function to the right child node
 * @parent: pointer to insert the right-child in
 * @value : integer assigned to the right-child node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	tmp = binary_tree_node(parent, value);

	if (!tmp)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = tmp;
		tmp->right = parent->right;
	}

	parent->right = tmp;

	return (tmp);
}

