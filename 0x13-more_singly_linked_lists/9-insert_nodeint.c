#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Pointer to head of the list
 * @idx: The index of the list where the new node will be placed
 * @n: The value in the node
 * Return: The new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t **ptr, *new_ptr;

	new_ptr = malloc(sizeof(listint_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->n = n;
	ptr = head;
	for (; ptr && *ptr && (idx > 0); idx--)
		ptr = &((*ptr)->next);
	if (idx > 0 || !ptr)
	{
		free(new_ptr);
		return (NULL);
	}
	new_ptr->next = *ptr;
	*ptr = new_ptr;
	return (new_ptr);
}
