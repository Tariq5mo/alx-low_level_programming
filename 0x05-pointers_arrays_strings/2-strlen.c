#include "main.h"

/**
 * _strlen - evaluate
 *
 * @s: the array which will evaluate it's length
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
