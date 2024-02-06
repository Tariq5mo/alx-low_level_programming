#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: the head pointer
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p;

	i = 0;
	if (head && *head)
	{
		i = (*head)->n;
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	return (i);
}
