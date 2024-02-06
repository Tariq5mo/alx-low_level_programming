#include "lists.h"

/**
 * sum_listint - Return the sum of all the data (n) of a linked list
 *
 * @head: The head pointer
 * Return: The sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	ptr = head;
	for (sum = 0; ptr; ptr = ptr->next)
		sum += ptr->n;/*sum all the data*/
	return (sum);
}
