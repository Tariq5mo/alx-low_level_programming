#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position.
 *
 * @head:Pointer to first node of list
 * @index:the index of the node
 * Return: the inserted node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pp, **p;

	if (!head && !(*head))
		return (-1);
	for (p = head; index > 0 && *p && (*p)->next; p = &((*p)->next))
		index--;
	if (!(*p) && index > 0)/*check if valid*/
		return (-1);
	if ((*p)->next)
		(*p)->next->prev = (*p)->prev;
	pp = (*p)->next;
	free(*p);
	(*p) = pp;
	return (1);
