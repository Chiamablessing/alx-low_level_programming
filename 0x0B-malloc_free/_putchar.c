#include "main.h"
#include <unistd.h>
/**
 * _puthcar - prints out a single character
 * @c: parameter variable of type char
 * Return: returns 1 or c on success and 0 otherwise
 *
 * 
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
