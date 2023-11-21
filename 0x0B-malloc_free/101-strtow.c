#include "main.h"

/**
 * strtow - splits a string into words
 *
 * @str: The string
 * Return: Array of pointers
 */
char **strtow(char *str)
{
	int i, j, n, w, cw[5000];
	char **s;

	w = j = 0;
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
	if (i >  0 && w == 0)
		return (NULL);
	s = malloc((sizeof(char *) * w) + 1);/*Array of pointers*/
	if (s == NULL || *str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; i < w; i++)/*Reseve memory for characters*/
	{
		s[i] = malloc(sizeof(char) * (cw[i] + 1));
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
	return (s);
}
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow(" ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}