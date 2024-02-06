#include "lists.h"

/**
 * add_nodeint - Adds a new node at beginning
 *
 * @head: The head of a linked list
 * @n: The value
 * Return: The new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (!head)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = (int)n;
	p->next = *head;
	*head = p;
	return (p);
}
