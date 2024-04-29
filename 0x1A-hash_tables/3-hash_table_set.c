#include "hash_tables.h"

/**
 * check_key - Check if the key is exist or not.
 *
 * @h: The pointer to head node.
 * @key:is the key. key can not be an empty string.
 * Return: 0 is exist, -1 if not.
 */
size_t check_key(const hash_node_t *h, const char *key)
{
	hash_node_t *p;

	p = (hash_node_t *)h;
	while (p)
	{
		if (strcmp(key, p->key) == 0)
			return (0);
		p = p->next;
	}
	return (-1);
}
/**
 * add_nodehash - Adds a new node at beginning
 *
 * @head: The head of a linked list.
 * @key: The key.
 * @value: The value.
 * Return: The new node.
 */
hash_node_t *add_nodehash(hash_node_t **head,
const char *key, const char *value)
{
	hash_node_t *p;

	if (!head)
		return (NULL);
	p = malloc(sizeof(hash_node_t));
	if (p == NULL)
		return (NULL);
	p->key = strdup(key);
	p->value = strdup(value);
	p->next = *head;
	*head = p;
	return (p);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht:is the hash table you want to add or update the key/value to.
 * @key:is the key. key can not be an empty string
 * @value:the value associated with the key.
 * Return:1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		if (check_key(ht->array[idx], key) == 0)/*check if key is exist*/
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
		}
		else
			add_nodehash(&(ht->array[idx]), key, value);
	}
	else /*if the index is NULL*/
		add_nodehash(&(ht->array[idx]), key, value);
	return (1);
}
