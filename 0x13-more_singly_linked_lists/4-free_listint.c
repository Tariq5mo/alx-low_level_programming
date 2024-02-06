#include "lists.h"

/**
 * free_listint - Frees a list_t list
 *
 * @head: The head of the linked list
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *ptr1, *ptr2;/*1:for free, 2:for safe the next node*/

	for (ptr1 = head; ptr1; ptr1 = ptr2)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
}
