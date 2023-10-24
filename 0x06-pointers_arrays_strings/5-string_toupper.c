#include "main.h"

/**
 * string_toupper - Convert to uppercase
 *
 * @s: The string
 * Return: The modified string
 */
char *string_toupper(char *s)
{
	int i;

	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)/*from begin to end*/
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	return (s);
}
