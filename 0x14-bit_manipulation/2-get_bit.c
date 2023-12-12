#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: integer number to be returned
 * @index: index starting from 0 of the bit to be returned
 *
 * Return: value of the bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		/* index is out of range */
		return (-1);
	}

	return ((n & (1ul << index)) ? 1 : 0);
}
