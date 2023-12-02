#include "3-calc.h"

/**
 * get_op_func - select the operator
 *
 * @s: the operator
 * Return: the the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (s != NULL && ops[i].op != NULL && s[1] == '\0')
	{
		if (s[0] == (ops[i]).op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
