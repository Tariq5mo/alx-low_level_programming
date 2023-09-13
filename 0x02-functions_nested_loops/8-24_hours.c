#include "main.h"
/**
 * jack_bauer - this a function that print every minute in a day
 *
 */
void jack_bauer(void)
{
	int a, h, w, o;

	for (a = 0; a < 10; a++)
	{
		for (h = 0; h < 10; h++)
		{
			if (a == 2 && h == 4)
				break;
			for (w = 0; w < 6; w++)
			{
				for (o = 0; o < 10; o++)
				{
					_putchar(a + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(w + '0');
					_putchar(o + '0');
					_putchar('\n');
				}
				o = 0;
			}
			o = 0;
			w = 0;
		}
		if (a == 2 && h == 4)
			break;
		o = 0;
		w = 0;
		h = 0;
	}
}
