#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: The size of the array
 * Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;
	unsigned long int i;

	p = malloc(sizeof(hash_table_t));
	if (!p)
		return (NULL);
	p->size = size;
	p->array = malloc(size * sizeof(hash_node_t *));
	if (!(p->array))
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		p->array[i] = NULL;
	return (p);
}
