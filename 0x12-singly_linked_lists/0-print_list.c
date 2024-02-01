#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: Pointer to head node
 * Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	if (h)
	{
		do
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			i++;
			h = (h->next);
		}while(h);
	}
	return (i);
}
