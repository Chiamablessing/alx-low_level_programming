#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: parameter of type int
 * Return: -1 on error, 1 if n == 0 and n otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
