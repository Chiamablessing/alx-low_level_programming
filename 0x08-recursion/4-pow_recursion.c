#include "main.h"
#include <math.h>
/**
 * _pow_recursion - raturns x to the power of y
 * @x: parameter variable of type int
 * @y: parameter variable of type int
 * Return: returns x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
