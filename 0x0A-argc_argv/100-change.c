#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Arguments which printed
 * @argv: The array of arguments
 * Return: 0 Success. 1 fails
*/
int main(int argc, char *argv[])
{
	int cs, mon;

	cs = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	mon = atoi(argv[1]);
	if (mon < 0)/*if it is less than 0*/
	{
		printf("0\n");
		return (0);
	}
	for (; mon >= 25; cs++)/*Check by loops*/
		mon = mon - 25;
	for (; mon >= 10; cs++)
		mon = mon - 10;
	for (; mon >= 5; cs++)
		mon = mon - 5;
	for (; mon >= 2; cs++)
		mon = mon - 2;
	for (; mon >= 1; cs++)
		mon = mon - 1;
	printf("%d", cs);
	printf("\n");
	return (0);
}
