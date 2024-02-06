#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 *
 * @head: The head pointer
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	n = 0;
	if (head && *head)
	{
		n = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	return (n);
}
