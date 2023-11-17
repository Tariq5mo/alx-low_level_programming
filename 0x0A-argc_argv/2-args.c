#include "main.h"

/**
 * main - Print all arguments of the program
 *
 * @argc: The arguments number
 * @argv: the array of arguments of the program
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	for (; argv != NULL; argv++)/*loop print arguments with newline*/
	{
		printf("%s\n", *argv);
	}
	return (0);
}
