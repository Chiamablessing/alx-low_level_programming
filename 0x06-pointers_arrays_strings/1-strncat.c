#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: pointer variable parameter of type char
 * @src: pointer variable parameter of type char
 * @n: variable parameter of type int
 * Return: return dest
 */


char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
