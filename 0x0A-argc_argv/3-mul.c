#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the count
 * @argv: the array
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
