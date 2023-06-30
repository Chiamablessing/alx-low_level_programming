#include "main.h"
/**
 *  prnnt_number - prints out int.
 *  @n: variable type of int to be printed.
 *
 *  Description: This function prints out an integer to the standard output
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
