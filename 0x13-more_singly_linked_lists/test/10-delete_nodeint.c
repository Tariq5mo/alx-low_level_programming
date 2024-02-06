#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a  node at index
 * @head: the head pointer
 * @index: the index
 * Return: 1 for succee, -1 for faile
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **ptr, *next_node;

	ptr = head;
	for (; ptr && *ptr && index > 0; index--)/*Find the nth node*/
		ptr = &((*ptr)->next);
	if (index > 0 || !ptr || !(*ptr))
		return (-1);
	next_node = (*ptr)->next;
	free(*ptr);
	(*ptr) = next_node;
	return (1);
}
