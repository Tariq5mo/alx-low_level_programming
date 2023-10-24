#include "main.h"

/**
 * leet - Convert to leet
 *
 * @s: The string
 * Return: The modified string
 */
char *leet(char *s)
{
	int i, j;
	char *sA = "AEOTL";
	char *sa = "aeotl";
	char *sn = "43071";

	for (i = 0; i < 5; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == sA[i] || s[j] == sa[i])
				s[j] = sn[i];
		}
	}
	return (s);
}
