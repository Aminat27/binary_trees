#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function to the left child node
 * @parent: pointer to insert the left-child in
 * @value : integer assigned to the left-child node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;


	if (!parent)
		return (NULL);

	tmp = binary_tree_node(parent, value);

	if (!tmp)
		return (NULL);
	if (parent->left != NULL)
	{
		parent->left->parent = tmp;
		tmp->left = parent->left;
	}

	parent->left = tmp;

	return (tmp);
}

