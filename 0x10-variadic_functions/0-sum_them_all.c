#include "variadic_functions.h"
/**
 * sum_them_all - sums unlimited number of ints
 * @n: number of int to sum
 *
 * Return: returns sum of all parameters and 0 on failure
 */
int sum_them_all(const unsigned int n, ...)
{
{
		va_list ap;
		unsigned int i, sum = 0;

		va_start(ap, n);

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);

		va_end(ap);

		return (sum);

	}
	return (0);
}
