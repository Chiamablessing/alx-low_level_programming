#include "main.h"
/**
 * root - checks the natural square root of an int
 * @n: parameter of the type int
 * @b: parameterof the type int
 * Return: returns the square root of n and -1 otherwise
 */
int root(int n, int b)
{
	if ((b * b) == n)
	{
		n = b;
		return (n);
	}
	else if ((b * b) > n)
	{
		return (-1);
	}
	return (root(n, (b + 1)));
}

/**
 * _sqrt_recursion - checks the value of n
 * @n: parameter of the type int
 * Return: returns the square root of n and -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (root(n, 1));
	}
}
