#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: the count
 * @argv: the array
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
