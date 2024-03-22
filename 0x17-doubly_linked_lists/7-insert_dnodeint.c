#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h:Pointer to first node of list
 * @idx:the index of the node
 * @n: the node's value
 * Return: the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, **p;
	unsigned int idxx, i;

	if (!h)
		return (NULL);
	idxx = idx;
	for (p = h, i = 0; idx > 0 && *p && (*p)->next; p = &((*p)->next), i++)
		idx--;
	if ((!(*p) && idx > 0) || (idxx > i + 1))/*check if valid*/
		return (NULL);
	new = malloc(sizeof(dlistint_t));/*create new node*/
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!(*h))/*case if the list is empty*/
		(*h) = new;
	else
	{
		if ((*p)->next || idxx == i)
		{
			new->prev = (*p)->prev;
			new->next = (*p);
			if (idxx != 0)
				(*p)->prev->next = new;
			(*p)->prev = new;
			if (idxx == 0)
				*h = new;
		}
		else
		{
			(*p)->next = new;
			new->prev = (*p);
		}
	}
	return (new);
}
