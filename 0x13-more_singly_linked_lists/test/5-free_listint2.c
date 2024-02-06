#include "lists.h"

/**
 * free_listint2 - Frees a list_t list
 *
 * @head: The head of the linked list
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (!head)
		return;
	for (ptr1 = *head; ptr1; ptr1 = ptr2)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
	*head = NULL;
}
