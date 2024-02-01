#include "lists.h"
/**
 * free_list - Frees a list_t list
 *
 * @head: The head of the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr1, *ptr2;

	for (ptr1 = head; ptr1; ptr1 = ptr2)
	{
		ptr2 = ptr1->next;
		if (ptr1->str)
			free(ptr1->str);
		free(ptr1);
		ptr1 = ptr2;
	}
}
