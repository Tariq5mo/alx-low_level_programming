#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate the lenght
 *
 * @s: the string
 * Return: the length
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	for (; *(s + i) != '\0'; i++)
		;
	return (i);
}
/**
 * _strdup - copy a string to another
 *
 * @str: the string
 * Return: the depublicated string
*/
char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL) 
		return (NULL);
	for (l = 0; l != i; l++)
		s[l] = str[l];
	return (s);
	free(s);
}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
	printf("failed to allocate memory\n");
	return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
