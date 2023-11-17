#include "main.h"

/**
 * main - Print the name of the program
 *
 * @argc: number of the arguments
 * @argv: the array of the arguments of the command
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);/*prints the name of program with its path*/
	(void) argc;/*To avoid */
	return (0);
}
