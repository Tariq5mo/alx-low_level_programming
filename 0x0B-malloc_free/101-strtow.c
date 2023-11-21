#include "main.h"

/**
 * strtow - kkf;sdf
 *
 * @str: ksduf;dsknf
 * Return: jhfv,bdjdskjf
 */
char **strtow(char *str)
{
	int i, j, n, w, cw[5000];
	char **s;

	w = j = 0;/*skhdlskdjhbfl*/
	for (i = 0; str[i] != '\0';)
	{
		n = 0;
		while (str[i] != ' ' && str[i] !='\t' && str[i] != '\0')
		{
			n++;
			i++;
		}
		if (n > 0)
		{
			cw[j] = n;
			j++;
			w++;
		}
		while (str[i] == ' ' || str[i] =='\t')
			i++;
	}
	s = malloc(sizeof(char *) * w);
	if (s == NULL || *str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; i < w; i++)/*malloc*/
	{
		if (i == w - 1)/*Represent the last pointer*/
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
	for (i = 0, j = 0; str[i] != '\0';)/*Fill blanks*/
	{
		n = 0;
		while (str[i] != ' ' && str[i] !='\t' && str[i] != '\0')
		{
			s[j][n] = str[i];
			n++;
			i++;
		}
		if (n > 0)
		{
			s[j][n] = '\0';
			j++;
		}
		while (str[i] == ' ' || str[i] =='\t')
			i++;
	}
	s[j - 1][n] = 0;
	return (s);
}
