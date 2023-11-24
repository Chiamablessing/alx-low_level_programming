#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the integer number
 * @index: index starting from 0 of the bit to be set
 *
 * Return: 1 on success or -1 if error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1ul << index);
	*n &= mask;
	return (1);
}
