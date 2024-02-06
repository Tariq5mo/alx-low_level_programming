#include "lists.h"

/**
 * add_nodeint_end - adding a new node at end
 *
 * @head: The head of a linked list
 * @n: The value in a node
 * Return: The address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr2, *ptr1;

	if (!head)
		return (NULL);
	for (ptr1 = *head; *head && ptr1->next; ptr1 = ptr1->next)
		;
	ptr2 = malloc(sizeof(listint_t));/*create the tail*/
	if (!ptr2)
		return (NULL);
	ptr2->n = (int)n;
	ptr2->next = NULL;
	if (!*head)
		*head = ptr2;
	else
		ptr1->next = ptr2;
	return (ptr2);
}
