#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks the alphabet character c
 * Return: 1 if an alphabet and 0 otherwise
 * @c: is a parameter of the function
 */

int _isalpha(int c)
{
	if (islower(c) || isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
