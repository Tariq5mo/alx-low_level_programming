#include "main.h"

/**
 * _strpbrk - find first occurrence of a char in a string
 *
 * @s: the array
 * @accept: the chars
 * Return: the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return ((s + i));
		}
	}
	return (NULL);
}
