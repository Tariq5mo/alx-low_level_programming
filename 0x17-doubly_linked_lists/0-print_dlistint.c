#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h:Pointer to first node of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next)
	{
		printf("%d\n", h->n);/*print the node's element*/
		i++;
	}
	return (i);
}
