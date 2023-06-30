#include "main.h"
/**
 *  prnnt_number - prints out an integer.
 *  @n: The integer to be printed.
 *  description: function print out an integer to a standard output
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}
	if (n / 10)
	{
		print_number(k / 10);
	}
	n = ((k % 10) + '0');
	_putchar(n);
}
