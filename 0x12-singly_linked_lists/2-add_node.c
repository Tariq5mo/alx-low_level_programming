#include "lists.h"

/**
 * add_node - Adding a new node at the beginning of a list_t list.
 *
 * @head: The pointer to head.
 * @str: Pointer to string.
 * Return: The list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (!h || !head)
		return (NULL);
	h->str = strdup(str);
	if (h->str == NULL)
	{
		free(h);
		return (NULL);
	}
	h->len = strlen(str);
	h->next = *head;
	*head = h;
	return (*head);
}
