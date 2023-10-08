#include "main.h"

/**
 * _realloc - reallocate the memory block
 *
 * @ptr:the previously block
 * @old_size:the old
 * @new_size:the new
 * Return: the new block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		if (new_size > old_size)
		{
			for (i = 0; i < old_size; i++)
				*((char *)p + i) = *((char *)ptr + i);
		}
		if (new_size < old_size)
		{
			for (i = 0; i < new_size; i++)
				*((char *)p + i) = *((char *)ptr + i);
		}
		if (new_size == old_size)
		{
			free(p);
			return (ptr);
		}
		free(ptr);
	}
	return (p);
}
