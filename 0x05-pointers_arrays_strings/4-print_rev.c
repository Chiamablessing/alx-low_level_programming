#include "main.h"
#include <string.h>
/**
 * print_rev - a string in reverse
 * @s: pointer variable of type int
 */

void print_rev(char *s)
{
	int end = (strlen(s) - 1);

	while (end >= 0)
	{
		_putchar(s[end]);
		end--;
	}
	_putchar('\n');
}
