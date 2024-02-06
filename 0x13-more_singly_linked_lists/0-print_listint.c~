#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h: The head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *p;
	size_t i;

	p = (listint_t *)h;
	for (i = 0; p; p = p->next, i++)
		printf("%d\n", p->n);
	return (i);
}
