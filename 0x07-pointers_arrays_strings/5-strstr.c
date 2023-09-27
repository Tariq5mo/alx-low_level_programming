#include "main.h"

/**
 * _strstr - search for a string
 *
 * @haystack:The array would scaned
 * @needle:The array
 * Return: the first occurrence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, i1, j, l;
	char *h, *n;

	h = haystack;
	n = needle;
	for (l = 0; *(n + l) != '\0'; l++)
		;
	for (i = 0; *(h + i) != '\0'; i++)
	{
		j = 0;
		if (*(h + i) == *(n + j))
		{
			i1 = i;
			j = 0;
			while (*(n + j) != '\0' && (*(h + i1) == *(n + j)))
			{
				i1++;
				j++;
			}
				;
			if (j != l)
				continue;
			return ((h + i));
		}
	}
	return (NULL);
}
