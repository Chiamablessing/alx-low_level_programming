#include "main.h"
/**
*print_line - prints line
*@n: variable of type int
*/
void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
