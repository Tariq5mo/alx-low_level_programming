#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: The pointer to head node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *p;
	size_t i;

	p = (listint_t *)h;
	i = 0;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
