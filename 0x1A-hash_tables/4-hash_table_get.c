#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 * Return:value associated with element, or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		if (!(ht->array[i]))
			continue;
		value = check_key_for4(ht->array[i], key);
		if (value)
			return (value);
	}
	return (value);
}
/**
 * check_key_for4 - Check if the key is exist or not.
 *
 * @h: The pointer to head node.
 * @key:is the key. key can not be an empty string.
 * Return: value associated with element, or NULL if key couldn’t be found.
 */
char *check_key_for4(const hash_node_t *h, const char *key)
{
	hash_node_t *p;

	p = (hash_node_t *)h;
	while (p)
	{
		if (strcmp(key, p->key) == 0)
			return (p->value);
		p = p->next;
	}
	return (NULL);
}
