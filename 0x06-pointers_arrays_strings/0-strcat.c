/**
 * _strlen - reverse and print
 *
 * @s: the array which reverse and print
 * Return: i the lenght
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - add src to dest
 *
 * @dest: first string
 * @src: second string
 * Return: p which the array
 */
char *_strcat(char *dest, char *src)
{
	char *p;
	int i, j;

	for (i = _strlen(dest), j = 0; *(src + j) != '\0'; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
