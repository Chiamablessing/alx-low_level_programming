#include "main.h"

/**
 *print_square - prints out square
 *@size: vaiable of type int
 */
void print_square(int size)
{
	int tr, nt;

	for (tr = 1; tr <= size; tr++)
	{
		for (nt = 1; nt <= size; nt++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
