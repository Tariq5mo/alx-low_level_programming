#include "main.h"

/**
 * create_array - make an array
 *
 * @size: the size of the array
 * @c: the character which fill the array
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
