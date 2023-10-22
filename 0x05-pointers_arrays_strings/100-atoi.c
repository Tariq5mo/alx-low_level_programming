#include "main.h"
#include <limits.h>
/**
 * _atoi - Convert string to number
 *
 * @s: the string
 * Return: the number
 */
int _atoi(char *s)
{
	int i, num, sign;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (num == INT_MAX)
			return (INT_MAX);
		if (num == INT_MIN)
			return (INT_MIN);
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if ((num % 10) == 0 && s[i] == 0)
				num = num * 10;
			else
				num = num * 10 + s[i] - '0';
			if (s[i + 1] < '0' || s[i + 1] > '9')
				return (num * sign);
		}
	}
	if (num == INT_MAX)
		return (INT_MAX);
	if (num == 0)
		return (0);
	return (num * sign);
}
