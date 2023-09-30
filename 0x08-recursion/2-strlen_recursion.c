#include "main.h"

/**
 * _strlen_recursion - return the length
 *
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
    if (*str == '\0')
        return 0;
    else
        return 1 + recLen(str + 1);
}
