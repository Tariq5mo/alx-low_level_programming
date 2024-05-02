#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 *
 * @size: The size of the array
 * Return: Pointer to the newly created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *p;
	unsigned long int i;

	p = malloc(sizeof(shash_table_t));
	if (!p)
		return (NULL);
	p->size = size;
	p->array = malloc(size * sizeof(shash_node_t *));
	if (!(p->array))
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		p->array[i] = NULL;
	p->shead = NULL;
	p->stail = NULL;
	return (p);
}

/**
 * scheck_key_s - Check if the key is exist or not.
 *
 * @h: The pointer to head node.
 * @key:is the key. key can not be an empty string.
 * Return: 0 is exist, -1 if not.
 */
size_t scheck_key_s(const shash_node_t *h, const char *key)
{
	shash_node_t *p;

	p = (shash_node_t *)h;
	while (p)
	{
		if (strcmp(key, p->key) == 0)
			return (0);
		p = p->next;
	}
	return (-1);
}
/**
 * add_nodehashs - Adds a new node at beginning of sorted hash table.
 *
 * @head: The head of a linked list.
 * @key: The key.
 * @value: The value.
 * Return: The new node.
 */
shash_node_t *add_nodehashs(shash_node_t **head,
const char *key, const char *value)
{
	shash_node_t *p;

	if (!head)
		return (NULL);
	p = malloc(sizeof(shash_node_t));
	if (p == NULL)
		return (NULL);
	p->key = strdup(key);
	p->value = strdup(value);
	p->next = *head;
	p->sprev = NULL;
	p->snext = NULL;
	*head = p;
	return (p);
}
/**
 * strcom - compare between two strings by ASCII.
 *
 * @s1: First string.
 * @s2: Second string.
 * Return: 1 of s1 is smaller, -1 if s2 is smaller, 0 of both equal.
*/
int strcom(char *s1, char *s2)
{
	size_t i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] < s2[i])
			return (1);
		else if (s1[i] > s2[i])
			return (-1);
	}
	return (0);
}
/**
 * make_sorted_list - make sorted list.
 *
 * @ht: pointer to sorted hash table data structure.
 * @p: pointer to the new node.
*/
void make_sorted_list(shash_table_t *ht, shash_node_t *p)
{
		shash_node_t *ptr;

	if (!(ht->shead)) /*if the soreted list is empty*/
		ht->stail = ht->shead = p;
	else if (k == -1 || k == 0) /*make p the last node if valid*/
	{
		ht->stail->snext = p;
		p->snext = NULL;
		p->sprev = ht->stail;
		ht->stail = p;
	}
	else /*make p the first node if valid*/
	{
		if (strcom(p->key, ht->shead->key) == 1)
		{
			ht->shead->sprev = p;
			p->sprev = NULL;
			p->snext = ht->shead;
			ht->shead = p;
		}
		else
		{
			for (ptr = ht->shead; ptr; ptr = ptr->snext)
			{
				if (strcom(p->key, ptr->key) == 1)
				{
					p->snext = ptr;
					p->sprev = ptr->sprev;
					ptr->sprev->snext = p;
					ptr->sprev = p;
					break;
				}
			}
		}
	}
}

/**
 * shash_table_set - adds an element to the hash table.
 *
 * @ht:is the hash table you want to add or update the key/value to.
 * @key:is the key. key can not be an empty string
 * @value:the value associated with the key.
 * Return:1 if it succeeded, 0 otherwise.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *p;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		if (scheck_key_s(ht->array[idx], key) == 0)/*check if key is exist*/
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);/*update value*/
		}
		else
			p = add_nodehashs(&(ht->array[idx]), key, value);
	}
	else /*if the index is NULL*/
		p = add_nodehashs(&(ht->array[idx]), key, value);
	make_sorted_list(ht, p);
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 * Return:value associated with element, or NULL if key couldn’t be found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		if (!(ht->array[i]))
			continue;
		value = scheck_key_for4(ht->array[i], key);
		if (value)
			return (value);
	}
	return (value);
}
/**
 * scheck_key_for4 - Check if the key is exist or not.
 *
 * @h: The pointer to head node.
 * @key:is the key. key can not be an empty string.
 * Return: value associated with element, or NULL if key couldn’t be found.
 */
char *scheck_key_for4(const shash_node_t *h, const char *key)
{
	shash_node_t *p;

	p = (shash_node_t *)h;
	while (p)
	{
		if (strcmp(key, p->key) == 0)
			return (p->value);
		p = p->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a sorted hash table.
 *
 * @ht:the hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *p;

	if (!ht)
		return;
	printf("{");
	for (p = ht->shead, i = 0; p; p = p->snext, i++)
	{
		if (i != 0)
			printf(", ");
		printf("'%s': '%s'", p->key, p->value);
		i++;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a sorted hash table.
 *
 * @ht:the hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *p;

	if (!ht)
		return;
	printf("{");
	for (p = ht->stail, i = 0; p; p = p->sprev, i++)
	{
		if (i != 0)
			printf(", ");
		printf("'%s': '%s'", p->key, p->value);
		/*p = p->next;*/
		i++;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table.
 *
 * @ht: the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr1, *ptr2, **head;
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

