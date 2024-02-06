#include "lists.h"

/**
 * add_nodeint - Adding a new node at beginning
 *
 * @head: Pointer to the head of a linked list
 * @n: The value in a node
 * Return: The address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (!head || !*head || !p)
	{
		free(p);
		return (NULL);
	}
	p->n = (int)n;
	p->next = *head;
	*head = p;
	return (p);
}
