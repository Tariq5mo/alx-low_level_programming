#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 *
 * @h: The pointer to head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *p;
	size_t i;

	p = (listint_t *)h;
	i = 0;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
