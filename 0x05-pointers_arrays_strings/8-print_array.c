/**
 * print_array - print n elemnts
 *
 * @a: the array
 * @n: the numbers of elemnts
 */
void print_array(int *a, int n)
{
	int l, num, rev, dig;

	rev = 0;
	for (l = 0; l < n; l++)
	{
		num = *(a + l);
		if (num == 0)
		{
			_putchar(num + '0');
		}
		if (num < 0)
		{
			_putchar('-');
			num = num * -1;
		}
		while (num > 0)
		{
			dig = num % 10;
			rev = rev * 10 + dig;
			num = num / 10;
		}
		while (rev > 0)
		{
			dig = rev % 10;
			_putchar(dig + '0');
			rev = rev / 10;
		}
		if (l != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
		rev = 0;
	}
	_putchar('\n');
}
