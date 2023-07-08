#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digits
 * @c: variable type of int
 * Return: always 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
