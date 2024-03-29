#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head:Pointer to first node of list
 * @index:the index of the node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index > 0 && head; head = head->next)
		index--;
	if (!head)
		return (NULL);
	return (head);
}
