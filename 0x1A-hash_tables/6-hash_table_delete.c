#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr1, *ptr2, **head;
	unsigned long int i;

	if (!ht)
		return;
	head = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		for (ptr1 = head[i]; ptr1; ptr1 = ptr2)
		{
			ptr2 = ptr1->next;
			if (ptr1->key)
				free(ptr1->key);
			if (ptr1->value)
				free(ptr1->value);
			free(ptr1);
			ptr1 = ptr2;
		}
	}
	free(head);
	free(ht);
	*head = NULL;
}
