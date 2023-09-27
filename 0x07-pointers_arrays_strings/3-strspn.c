#include "main.h"

/**
 * _strspn - print number of lines
 *
 * @s: the string which tested
 * @accept: the char
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0';)
	{
		for (j = 0; *(accept + j) != *(s + i); j++)
		{
			if (*(accept + j) == '\0')
				return (i);
		}
	}
	return (i);
}
