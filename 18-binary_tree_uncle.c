#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - Finds the sibling of a node
 *@node: Node to find its uncle
 * Return: a pointer to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
	{
		return (binary_tree_sibling(node->parent));
	}
	return (NULL);
}
