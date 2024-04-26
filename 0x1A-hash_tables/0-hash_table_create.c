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

	p = malloc(sizeof(hash_table_t));
	if (!p)
		return (NULL);
	p->array = malloc(size);
	if (!(p->array))
		return (NULL);
	return (p);
}
