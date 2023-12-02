#include "main.h"

/**
<<<<<<< HEAD
 * strtow - spilt string to separate words
 *
 * @str: a string
 * Return: the array of words
=======
 * strtow - splits a string into words
 *
 * @str: The string
 * Return: Array of pointers
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
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
<<<<<<< HEAD
	s = malloc(sizeof(char *) * wo);
	if (s == NULL || *str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; i < wo; i++)
	{
		if (i == wo - 1)
			s[i] = malloc(sizeof(char) * (cw[i] + 2));
		else
			s[i] = malloc(sizeof(char) * (cw[i] + 1));
=======
	if (i >  0 && w == 0)
		return (NULL);
	s = malloc((sizeof(char *) * w) + 1);/*Array of pointers*/
	if (s == NULL || *str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; i < w; i++)/*Reseve memory for characters*/
	{
		s[i] = malloc(sizeof(char) * (cw[i] + 2));
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
		if (s[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}
<<<<<<< HEAD
	for (i = 0, j = 0; str[i] != '\0';)
=======
	s[i] = NULL;
	for (i = 0, j = 0; str[i] != '\0';)/*Fill blanks*/
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
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
<<<<<<< HEAD
	s[j - 1][nu] = 0;
=======
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
	return (s);
}
