#include "main.h"
/**
 *print_diagonal - prints diagonal line
 *@n: variable type of int
 */

void print_diagonal(int n)
{
	int i = 0, b;

	while (i < n && n > 0)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)

		_putchar('\n');
}
