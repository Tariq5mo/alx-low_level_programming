#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: The head pointer
 * @index: The index of node
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;

	p = head;
	for (; p && index > 0; p = p->next, index--)
		;
	if (!p)
		return (NULL);
	return (p);
}
