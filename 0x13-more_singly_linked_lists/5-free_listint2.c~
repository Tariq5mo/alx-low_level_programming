#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 *
 * @head: The head of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p1, *p2;

	if (!head)
		return;
	for (p1 = *head; p1; p1 = p2)
	{
		p2 = p1->next;
		free(p1);
		p1 = p2;
	}
	*head = NULL;
}
