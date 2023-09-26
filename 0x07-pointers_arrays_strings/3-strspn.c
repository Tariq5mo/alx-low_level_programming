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
	unsigned int i, j, c;

	c = 0;
	for (i = 0; *(accept + i) != '\0';)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i))
			{
				while (*(s + j) == *(accept + i))
				{
					c++;
					j++;
				}
				i++;
				j = -1;
			}
		}
	}
	return (c);
}
