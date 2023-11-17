#include "main.h"

/**
 * main - Print the  product of two numbers
 *
 * @argc: void (not used)
 * @argv: Array content the numbers
 * Return: 0 for Success, 1 for there are only two numbers
 */
int main(int argc, char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)/*NULL for n1 & n2*/
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));/*Convert string to int*/
	(void) argc;
	return (0);
}
