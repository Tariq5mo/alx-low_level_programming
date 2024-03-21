#include "lists.h"

/**
 * sum_dlistint - calc the sum of all the data (n) of a dlistint_t linked list.
 *
 * @head:Pointer to first node of list
 * Return: returns the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	for (i = 0; head; head = head->next)
		i += head->n;
	return (i);
}
