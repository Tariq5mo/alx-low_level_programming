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
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
