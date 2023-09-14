include "main.h"

/**
 * _isdigit - function check for digit
 *
 * @c:the variable
 * Return:1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9') /*This for returning*/
		return (1);
	else
		return (0);
}
