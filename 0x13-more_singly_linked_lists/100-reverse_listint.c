#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: Pointer to pointer of the the head node
 * Return: The reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	if (!head || !*head)
		return (NULL);
	p1 = (*head)->next;
	(*head)->next = NULL;
	p2 = *head;
	while (p1)
	{
		*head = p1;
		p1 = p1->next;
		(*head)->next = p2;
		p2 = *head;
	}
	return (*head);
}
