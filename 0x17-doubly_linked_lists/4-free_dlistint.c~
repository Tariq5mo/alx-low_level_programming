#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head:Pointer to first node of list
 * @n: the node's value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, **p = head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));/*create new node*/
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!(*head))/*case if the list is empty*/
		(*head) = new;
	else
	{
		for (; (*p)->next; p = &((*p)->next))
			;
		new->prev = *p;
		(*p)->next = new;
	}
	return (new);
}
