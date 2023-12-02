#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: The number of arguments
 * @argv: Arguments
 * Return: 0 (Success), other (fail)
 */
int main(int argc, char **argv)
{
	int result;
	int (*opf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	opf = get_op_func(argv[2]);
	if (opf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = opf(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
