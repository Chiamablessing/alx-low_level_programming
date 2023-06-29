#include "main.h"
/**
 *  prnnt_numbers - prints out ints
 *  @n: varnable type of int
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
