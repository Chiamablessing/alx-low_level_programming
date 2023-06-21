#include "main.h"

/**
 *print_last_digit - getting the last digit of r
 *@r: parameter of the function
 *Return: returns the last digit
 */

int print_last_digit(int r)
{
	int last = (r % 10);

	if (last < 0)
	{
		last = (-1 * last);
	}
	_putchar(last + '0');
	return (last);
}
