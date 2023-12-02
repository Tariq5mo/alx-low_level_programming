#include "main.h"

/**
 * strtow - spilt string to separate words
 *
 * @str: a string
 * Return: the array of words
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
	s = malloc(sizeof(char *) * wo);
	if (s == NULL || *str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; i < wo; i++)
	{
		if (i == wo - 1)
			s[i] = malloc(sizeof(char) * (cw[i] + 2));
		else
			s[i] = malloc(sizeof(char) * (cw[i] + 1));
		if (s[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0, j = 0; str[i] != '\0';)
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
