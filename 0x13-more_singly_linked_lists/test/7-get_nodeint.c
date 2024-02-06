#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 *
 * @head: The pointer to the head node
 * @index: The index of the node
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	ptr = head;
	for (; ptr && index > 0; ptr = ptr->next, index--)
		;
	if (!ptr)
		return (NULL);
	return (ptr);
}
