#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints out string to stdo
 * @name: name to be printed
 * @f: function that prints a name in uppercase
 */

void print_name(char *name, void (*f)(char *))
{
	(name != NULL && f) ? f(name) : (void)0;
}
