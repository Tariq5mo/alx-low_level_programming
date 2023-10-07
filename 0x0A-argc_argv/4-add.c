#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the count of arguments
 * @argv: the string
 * Return: The 1 when fails, 0 when Success
*/
int main(int argc, char *argv[])
{
	long add, dig, i;
	char *endptr;

	add = 0;
	endptr = NULL;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		dig = strtol(argv[i], &endptr, 10);
		if (endptr == argv[i])
		{
			printf("Error\n");
			return (1);
		}
		else
			add = add + dig;
	}
	printf("%ld\n", add);
	return (0);
}
