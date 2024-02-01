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
	list_t *p;

	p = (list_t *)h;
	i = 0;
	if (h)
	{
		for (; p; p = (p->next))
		{
			if (!(p->str))
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", p->len, p->str);
			i++;
		}
	}
	return (i);
}
