#include "main.h"

/**
 *times_table - multiplications of n prints 9 times table
 */

void times_table(void)
{
	int r, m, o, d, l;

	for (r = 0; r <= 9; r++)
	{
		for (m = 0; m <= 9; m++)
		{
			o = r * m;
			d = o / 10;
			l = o % 10;

			if (m == 0)
			{
				_putchar('0');
			}
			else if (o < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar( + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(l + '0');
			}
		}
		_putchar('\n');
	}
}
