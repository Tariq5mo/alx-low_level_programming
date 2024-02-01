#include "lists.h"


/**
 * add_node_end - Adding a node at the end of a list_t list.
 *
 * @head: The pointer to head
 * @str: Pointer to string
 * Return: The new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr1, *ptr2;

	if (!head)
		return (NULL);
	ptr1 = *head;
	for (; *head && ptr1->next; ptr1 = ptr1->next)/*Find the tail*/
		;
	ptr2 = malloc(sizeof(list_t));/*Create the tail*/
	if (!ptr2)
		return (NULL);
	ptr2->str = strdup(str);
	if (!ptr2->str)
	{
		free(ptr2);
		return (NULL);
	}
	ptr2->len = strlen(str);
	ptr2->next = NULL;
	if (!*head)
		*head = ptr2;
	else
		ptr1->next = ptr2;
	return (ptr2);
}
