#include "main.h"
/**
 * prime - checks for a divisible prime int
 * @index1: variable type int
 * @index2: variable type int
 * Return: 0 if not prime, 1 if prime
 */

int prime(int index1, int index2)
{
	if (index1 % index2 == 0)
	{
		return (0);
	}
	if (index2 == index1 / 2)
	{
		return (1);
	}
	return (prime(index1, index2 + 1));
}

/**
 * is_prime_number - checks for a prime int
 * @n: variable type int
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	int index2 = 2;

	if  (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (prime(n, index2));
}
