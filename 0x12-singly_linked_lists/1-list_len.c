#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 *
 * @h: Pointer to struct
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = (h->next))
		;
	return (i);
}
