#include "main.h"
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

int *array_range(int min, int max)
{
	int *p, i, j;
	if (min < 0 || max < 0)
	{
		if (min < 0)
			i = -1 * min;
		if (max < 0)
			j = -1 * max;
	}
	else
	{
		i = min;
		j = max;
	}
	if (min > max)
		return (NULL);
	
	p = malloc(sizeof(int) * (j - i + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		*(p + i) = j;
	return (p);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
/**
 * array_range - return range
 *
 * @min: the min
 * @max: the max
 * Return: the range array
*/
