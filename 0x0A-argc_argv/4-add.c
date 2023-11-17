#include "main.h"

/**
 * main - Print the additition
 *
 * @argc: digits
 * @argv: digits are inside this array
 * Return: 0 Success, 1 if not
 */
int main(int argc, char **argv)
{
	int n, m, add;
	char *pn;

	add = 0;
	if (argc == 1)/*If there are not digits*/
	{
		printf("0\n");
		return (0);
	}
	for (n = 1; n < argc; n++)
	{
		pn = argv[n];
		for (m = 0; pn[m] != '\0'; m++)
		{
			if (isdigit(pn[m]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(pn);
	}
	printf("%d\n", add);
	return (0);
}
