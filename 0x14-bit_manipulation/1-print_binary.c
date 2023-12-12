:#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: n is the number whose binary is to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n, len = 0;
	int i, bit;

	if (temp == 0)
	{
		_putchar('0');
		return;
	}

	while (temp > 0)
	{
		temp >>= 1;
		len++;
	}

	i = len - 1;

	while (i >= 0)
	{
		bit = (n >> i) & 1;
		putchar(bit + '0');
		i--;

	}
}
