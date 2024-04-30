#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht:the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		print_listint(ht->array[i]);
	printf("}\n");
}
/**
 * print_listint - Prints all elements of a listint_t list
 *
 * @h: The pointer to head node.
 * Return: the number of nodes.
 */
size_t print_listint(const hash_node_t *h)
{
	hash_node_t *p;
	size_t i;
	static int j = 1;

	if (!h)
		return (0);
	p = (hash_node_t *)h;
	i = 0;
	while (p)
	{
		if (j != 1)
			printf(", ");
		printf("'%s': '%s'", p->key, p->value);
		p = p->next;
		i++;
		j++;
	}
	return (i);
}
