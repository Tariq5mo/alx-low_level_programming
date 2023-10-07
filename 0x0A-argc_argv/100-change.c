#include "main.h"
#include <stdlib.h>

/**
 * main - print the  the minimum number of coins
 *
 * @argc: The number of arguments
 * @argv: The array
 * Return: 0 Success. 1 fails
*/
int main(int argc, char *argv[])
{
	int cents, mon;

	cents = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	mon = atoi(argv[1]);
	if (mon < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; mon >= 25; cents++)
		mon = mon - 25;
	for (; mon >= 10; cents++)
		mon = mon - 10;
	for (; mon >= 5; cents++)
		mon = mon - 5;
	for (; mon >= 2; cents++)
		mon = mon - 2;
	for (; mon >= 1; cents++)
		mon = mon - 1;
	printf("%d\n", cents);
	return (0);
}
