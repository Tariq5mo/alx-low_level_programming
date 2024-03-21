#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head:Pointer to first node of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;

	if (!head)
		return;
	for (; p; p = head)
	{
		head = p->next;
		free(p);
	}
}
