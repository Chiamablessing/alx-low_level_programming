#include <unistd.h>
/**
 * _putchar - writes a character to c stout
 * @c: character to be printed
 * Return: 1 if true, 0 on error and -1 otherwise
 * 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
