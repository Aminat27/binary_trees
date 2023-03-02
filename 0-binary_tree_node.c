#include "binary_trees.h"
/**
 * binary_tree_node - A function to the parent node
 * @parent: pointer to the parent node
 * @value : integer assigned to the parent node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));

	if (!tmp)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);
}
