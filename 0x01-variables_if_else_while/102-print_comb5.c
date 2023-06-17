#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all possible combinations of two two-digit numbers
 *Return: always 0 (Success)
 */

int main(void)
{int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if ((a < c) || (a == c && b < d))
					{
						putchar(48 + a);
						putchar(48 + b);
						putchar(' ');
						putchar(48 + c);
						putchar(48 + d);
					if (a != 9 || b != 8)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
