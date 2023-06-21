#include "main.h"

/**
 *times_table - multiplications of n prints 9 times table
 */

void times_table(void)
{
	int r, m, o;

	for (r = 0; r <= 9; r++)
	{
		for (m = 0; m <= 9; m++)
		{
			o = r * m;

			if (m == 0)
			{
				_putchar(o + '0');
			}
			else if (o <= 9 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else if (o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
