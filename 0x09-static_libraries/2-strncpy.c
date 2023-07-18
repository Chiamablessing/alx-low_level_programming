#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: pointer variable parameter of type char
 * @src: pointer variable parameter of type char
 * @n: variable parameter of type int
 * Return: returns deest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
