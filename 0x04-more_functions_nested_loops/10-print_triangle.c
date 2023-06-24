#include "main.h"
/**
*print_triangle - prints out traingle
*@size: parameter variable of type int
*/

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = a; b < size; b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
