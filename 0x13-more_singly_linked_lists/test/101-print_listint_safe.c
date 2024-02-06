#include "lists.h"

/**
 * check - chech if the node is repeated
 *
 * @p: pointer to array of address
 * @ip: pointer to node
*/
void check(int **p, int *ip)
{
	int i;

	for (i = 0; i < 100; p++, i++)
	{
		if (ip == *p)
			exit(98);
	}
}
/**
 * print_listint_safe - prints a listint_t linked list in safe
 *
 * @head: The pointer to head node
 * Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *p;
        size_t i;
	int *arr[100];

        p = (listint_t *)head;
        i = 0;
        for (;;)
	{
		check(arr, &(p->n));
		printf("[%p] %d\n", (void *)&(p->n), p->n);
		arr[i] = &(p->n);
		i++;
		p = p->next;
		if (!p)
			break;
	}
	return (i);
}
