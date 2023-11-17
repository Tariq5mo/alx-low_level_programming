#include "main.h"

/**
 * main - Print all arguments
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j != argc; j++)/*print by loop*/
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
