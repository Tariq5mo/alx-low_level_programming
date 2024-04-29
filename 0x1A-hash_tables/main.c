#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "col");
	hash_table_set(ht, "mentioner", "fool");
	hash_table_set(ht, "name", "tariq");
	hash_table_set(ht, "name", "");
	hash_table_set(NULL, "klam", "kkk");
	for (i = 0; i < 1024; i++)
	{
		print_listint(ht->array[i]);
		if (ht->array[i])
			printf("----------------------------------\n");
	}
	return (EXIT_SUCCESS);
}

/**
 * print_listint - Prints all elements of a listint_t list
 *
 * @h: The pointer to head node
 * Return: the number of nodes
 */
size_t print_listint(const hash_node_t *h)
{
	hash_node_t *p;
	size_t i;

	if (!h)
		return (0);
	p = (hash_node_t *)h;
	i = 0;
	while (p)
	{
		printf("%s\t", p->key);
		if (strlen(p->value) == 0)
			printf("empty");
		else
			printf("%s", p->value);
		fflush(stdout);
		p = p->next;
		i++;
	}
	printf("\n");
	return (i);
}
