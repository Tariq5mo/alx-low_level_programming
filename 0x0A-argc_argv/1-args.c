#include "main.h"

/**
 * main - the number of arguments printed
 *
 * @argc: Number of arguments
 * @argv: the array of arguments of command
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);/*Just print number*/
	(void) argv;
	return (0);
}
