#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first integer number to move from
 * @m: integer numer to move to
 * Return: returns the number of flips made to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_flips = (n ^ m), count = 0;

	while (num_flips)
	{
		if (num_flips & 1)
			count += (num_flips & 1);
		num_flips >>= 1;
	}
	return (count);

}
