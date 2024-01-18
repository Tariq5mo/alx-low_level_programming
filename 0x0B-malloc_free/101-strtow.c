#include "main.h"

/**
 * strtow - splits a string into words
 *
 * @str: The string
 * Return: Array of pointers
 */
char **strtow(char *str)
{
	int i, j, nu, wo, cw[6000];
	char **s;

	wo = j = 0;
	for (i = 0; str[i] != '\0';)
	{
		nu = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			nu++;
			i++;
		}
		if (nu > 0)
		{
			cw[j] = nu;
			j++;
			wo++;
		}
		while (str[i] == ' ' || str[i] == '\t')
			i++;
	}
	if (i >  0 && wo == 0)
		return (NULL);
	s = malloc((sizeof(char *) * wo) + 1);/*Array of pointers*/
	if (s == NULL || *str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; i < wo; i++)/*Reseve memory for characters*/
	{
		s[i] = malloc(sizeof(char) * (cw[i] + 2));
		if (s[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}
	s[i] = NULL;
	for (i = 0, j = 0; str[i] != '\0';)/*Fill blanks*/
	{
		
		while (str[i] != ' ' && str[i] !='\t' && str[i] != '\0')
		{
			s[j][nu] = str[i];
			nu++;
			i++;
		}
		if (nu > 0)
		{
			s[j][nu] = '\0';
			j++;
		}
		while (str[i] == ' ' || str[i] =='\t')
			i++;
	}
	s[j - 1][nu] = 0;
	return (s);
}
