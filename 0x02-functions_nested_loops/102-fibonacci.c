#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, pre1, pre2, sum;

	pre1 = 1, pre2 = 0;
	for (l = 1; l <= 50; l++)
	{
		sum = pre1 + pre2;
		printf("%d", sum);
		if (l != 50)
			printf(", ");
		pre2 = pre1;
		pre1 = sum;
	}
	return (0);
}
