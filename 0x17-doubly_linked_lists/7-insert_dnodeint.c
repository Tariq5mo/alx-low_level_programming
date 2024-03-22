#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head:Pointer to first node of list
 * @index:the index of the node
 * Return: the nth node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, **p = h;
	unsigned int idxx = idx;

        if (!h)
                return (NULL);
	for (; idx > 0 && *p && (*p)->next; p = &((*p)->next))
                idx--;
        if (!(*p) && idx > 0)/*check if valid*/
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
		if ((*p)->next)
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
