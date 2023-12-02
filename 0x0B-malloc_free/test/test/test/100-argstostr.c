#include "main.h"
/**
 * strlena - calculate length of all arguments
 *
 * @ac: arguments number
 * @s: the array of pointers
 * Return: the length of all arguments
 */
int strlena(int ac, char **s)
{
	int n, m, k;

	k = 0;
	for (n = 0; n < ac; n++)
	{
		for (m = 0; s[n][m] != '\0'; m++)
			k++;
		k++;
	}
	return (k);
}
/**
 * argstostr - concatenates tge argument
 *
 * @ac: number of arguments
 * @av: the strings
 * Return: whole string
 */
char *argstostr(int ac, char **av)
{
	int n, m, k;
	char *s;

	k = 0;
	s = malloc(sizeof(char) * strlena(ac, av) + 1);
	if (s == NULL || av == NULL || ac == 0)
		return (NULL);
	for (n = 0; n < ac; n++, k++)
	{
		for (m = 0; av[n][m] != '\0'; m++, k++)
			s[k] = av[n][m];
		s[k] = '\n';
	}
	s[k] = '\0';
	return (s);
}
